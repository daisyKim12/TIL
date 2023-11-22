#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

typedef struct _graph {
int vertex;
int length;
struct _graph* link;
} linked_adja;

static int v_num = 8;
static int adjacency_matrix[8][8] = {
{0, 0, 47, 0, 70, 24, 0, 0},
{0, 0, 0, 31, 0, 0, 74, 79},
{0, 55, 0, 88, 23, 0, 66, 0},
{0, 0, 0, 0, 0, 0, 0, 29},
{0, 31, 0, 0, 0, 0, 42, 0},
{0, 0, 25, 120, 0, 0, 0, 0},
{0, 0, 0, 0, 0, 0, 0, 66},
{0, 0, 0, 0, 0, 0, 0, 0}
};

//static int v_num = 8;
// static int adjacency_matrix[8][8] = {
// {0, 0, 0, 0, 0, 0, 0, 0},
// {300, 0, 0, 0, 0, 0, 0, 0},
// {1000, 800, 0, 0, 0, 0, 0, 0},
// {0, 0, 1200, 0, 0, 0, 0, 0},
// {0, 0, 0, 1500, 0, 250, 0, 0},
// {0, 0, 0, 1000, 0, 0, 900, 1400},
// {0, 0, 0, 0, 0, 0, 0, 1000},
// {1700, 0, 0, 0, 0, 0, 0, 0}
// };

void ssadsp(linked_adja** graph_array, int start_vertex, int **vertex_log, int *distance_matrix) {
    // Initialize distance_matrix and vertex_log
    for (int i = 0; i < v_num; i++) {
        distance_matrix[i] = INT_MAX;  // Set all distances to infinity
        for (int j = 0; j < v_num; j++) {
            vertex_log[i][j] = 0;
        }
    }

    // Set distance to the start_vertex as 0
    distance_matrix[start_vertex] = 0;

    // Iterate through all vertices
    for (int k = 0; k < v_num - 1; k++) {
        for (int i = 0; i < v_num; i++) {
            // Iterate through the adjacency list of the current vertex
            linked_adja* current = graph_array[i];
            while (current != NULL) {
                int j = current->vertex;
                int weight = adjacency_matrix[i][j];

                // Relaxation step
                if (distance_matrix[i] != INT_MAX && distance_matrix[i] + weight < distance_matrix[j]) {
                    distance_matrix[j] = distance_matrix[i] + weight;

                    // Update vertex_log
                    int l;
                    for (l = 0; vertex_log[i][l] != 0; l++) {
                        vertex_log[j][l] = vertex_log[i][l];
                    }
                    vertex_log[j][l] = i + 1;  // +1 to convert to 1-based indexing
                }

                current = current->link;
            }
        }
    }

    for(int j = 0; j < v_num; j++) {
        if(distance_matrix[j] == INT_MAX) {
            distance_matrix[j] = 0;
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

    // single source all destination shortest paths
    int start_vertex = 0;
    int* distance_matrix = (int*)malloc(v_num * sizeof(int));
    int** vertex_log = (int**)malloc(v_num * sizeof(int*));
    
    for (int v_l_i = 0; v_l_i < v_num; v_l_i++) {
        vertex_log[v_l_i] = (int*)malloc(v_num * sizeof(int));
    }

    ssadsp(graph_array, start_vertex, vertex_log, distance_matrix);
    
    // print
    for (int p_i = 0; p_i < v_num; p_i++) {
        
        printf("%d vertex log : ", p_i);
        
        for (int log_i = 0; log_i < v_num; log_i++) {
            if (vertex_log[p_i][log_i] == 0) {
                break;
            }
            printf("%d ", vertex_log[p_i][log_i]);

        }


        printf("distance : %d\n", distance_matrix[p_i]);
    }

    return 0;
}
