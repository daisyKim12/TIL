#include <stdio.h>
#include <stdlib.h>

typedef struct _graph {
    int vertex;
    int cost;
    struct _graph* link;
} linked_adja;

static int v_num = 7;

static int adjacency_matrix[7][7] = {
    {-1, 5, 13, 8, -1, -1, -1},
    {5, -1, 2, -1, 6, 10, -1},
    {13, 2, -1, 7, 1, -1, -1},
    {8, -1, 7, -1, 4, -1, 6},
    {-1, 6, 1, 4, -1, -1, 9},
    {-1, 10, -1, -1, -1, -1, 6},
    {-1, -1, -1, 6, 9, 6, -1}
};

int main(void) {
    linked_adja** graph_array = (linked_adja**) malloc(v_num * sizeof(linked_adja*));

    for (int i = 0; i < v_num; i++) {
        graph_array[i] = NULL; // Initialize each element to NULL

        for(int j = 0; j < v_num; j++) {
            int temp = adjacency_matrix[i][j];
            if(temp > 0) {
                linked_adja* node = (linked_adja*) malloc(sizeof(linked_adja));
                node->cost = temp;
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
            printf("%d %d -> ", current_node->vertex, current_node->cost);
            current_node = current_node->link;
        }
        printf("end\n");
    }

    // Free allocated memory
    for(int i = 0; i < v_num; i++) {
        linked_adja* current_node = graph_array[i];
        while(current_node != NULL) {
            linked_adja* next_node = current_node->link;
            free(current_node);
            current_node = next_node;
        }
    }
    free(graph_array);

    return 0;
}