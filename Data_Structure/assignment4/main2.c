#include <stdio.h>
#include <stdlib.h>

typedef struct _graph {
    int vertex;
    struct _graph* link;
} linked_adja;

static int v_num = 10;

static int adjacency_matrix[10][10] = {
    {-1, 1, -1, -1, -1, -1, -1, -1, -1, -1},
    {1, -1, 1, 1, -1, -1, -1, -1, -1, -1},
    {-1, 1, -1, -1, 1, -1, -1, -1, -1, -1},
    {-1, 1, -1, -1, 1, 1, -1, -1, -1, -1},
    {-1, -1, 1, 1, -1, -1, -1, -1, -1, -1},
    {-1, -1, -1, 1, -1, -1, 1, 1, -1, -1},
    {-1, -1, -1, -1, -1, 1, -1, 1, -1, -1},
    {-1, -1, -1, -1, -1, 1, 1, -1, 1, 1},
    {-1 ,-1, -1, -1, -1, -1, -1, 1, -1, -1},
    {-1, -1, -1, -1, -1, -1, -1, 1, -1, -1},
};

#define MIN2(x,y) ((x) < (y) ? (x) : (y))
static int dfn[10] = {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1};
static int low[10] = {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1};
static int num;

// void dfnlow(int u, int v, int** graph) {
//     linked_adja* ptr;
//     int w;

//     dfn[u] = low[u] = num++;
//     for (ptr = graph[u]; ptr; ptr = ptr -> link) {
//         w = ptr->vertex;
//         if(dfn[w] < 0) {
//             dfnlow(w, u, graph);
//             low[u] = MIN2(low[u], low[w]);
//         }
//         else if (w != v) {
//             low[u] = MIN2(low[u], dfn[w]);
//         }
//     }
// }

void dfnlow(int u, int v) {
    int w;

    dfn[u] = low[u] = num++;
    for (w = 0; w < v_num; w++) {
        if (adjacency_matrix[u][w] > 0) {
            if (dfn[w] < 0) {
                dfnlow(w, u);
                low[u] = MIN2(low[u], low[w]);
            } else if (w != v) {
                low[u] = MIN2(low[u], dfn[w]);
            }
        }
    }
}



int main(void) {
    linked_adja** graph_array = (linked_adja**)malloc(v_num * sizeof(linked_adja*));

    for (int i = 0; i < v_num; i++) {
        graph_array[i] = NULL; // Initialize each element to NULL

        for(int j = 0; j < v_num; j++) {
            int temp = adjacency_matrix[i][j];
            if(temp > 0) {
                linked_adja* node = (linked_adja*) malloc(sizeof(linked_adja));
                node->vertex = j;
                node->link = NULL;

                if (graph_array[i] == NULL) {
                    // If the list is empty, make the new node the head of the list
                    graph_array[i] = node;
                } else {
                    // Find the end of the list and add the new node
                    linked_adja* end_node = graph_array[i];
                    while(end_node->link != NULL) {
                        end_node = end_node->link;
                    }

                    end_node->link = node;
                }
            }
        }
    }

    // Print
    for(int i = 0; i < v_num; i++) {
        linked_adja* current_node = graph_array[i];
       
        printf("(node %d) -> ", i);
        while(current_node != NULL) {
            printf("%d -> ", current_node->vertex);
            current_node = current_node->link;
        }
        printf("end\n");
    }


    // Call dfnlow for each vertex
    for (int i = 0; i < v_num; i++) {
        if (dfn[i] < 0) {
            dfnlow(i, -1);
        }
    }
    
    //dfnlow(3, 4, graph_array);
    
    return 0;
}