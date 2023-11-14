#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <math.h>
#include <time.h>
#include <stdbool.h>

#define SEED 399
#define max_queue_size 100

//Problem 1
typedef struct _node {
    int data;
    struct _node* leftChild;
    struct _node* rightChild;   
} NODE;

NODE* tree_queue[max_queue_size];

static int front = -1;
static int rear  = -1;

void AddQ(NODE* node_pointer) {
    if(rear == max_queue_size -1) {
        fprintf(stderr, "\n[ERROR] Max queue size");
    }
    else {
        tree_queue[++rear] = node_pointer;
    }
}

NODE* DeleteQ(void) {
    if(front == rear) {
        fprintf(stderr, "\n [ERROR] Max queue size");
        return NULL;
    }
    else {
        return tree_queue[++front];
    }
}

void getRandom(int* item_array, int n) {
    int k = 0;
    int range;

    range = n + n + n;

    for (k = 0; k < n; k++) {
        item_array[k] = rand() % range;
    }
}

void create_complete_binary_tree(NODE* tree_head, int node_number, int* item_array) {

    // TODO: fix the connection
    
    for (int i = 0; i < node_number; i++) {
        NODE* current = (NODE*)malloc(sizeof(NODE));
        current->data = item_array[i];
        current->leftChild = NULL;
        current->rightChild = NULL;

        AddQ(current);
    }
    
   
    // Print elements in the queue
    printf("Elements in the queue: ");
    for (int j = front + 1; j <= rear; j++) {
        printf("%d ", tree_queue[j]->data);
    }
    printf("\n");
    
    //extract head node
    tree_head->leftChild = tree_queue[0];
    tree_head->rightChild = tree_head;

    //connect
    for(int i = 0; i < node_number; i++){
        if(2*i+1 < node_number) {
            tree_queue[i]->leftChild = tree_queue[2*i +1];
        } else {
            tree_queue[i]->leftChild = NULL;
        }

        if(2*i+2 < node_number) {
            tree_queue[i]->rightChild = tree_queue[2*i +2];
        } else {
            tree_queue[i]->rightChild = NULL;
        }
    }

    for(int i = 0; i<node_number; i++){
        DeleteQ();
    }
}

// problem 2
typedef struct _stack {
    NODE* node_address;
    struct _stack* link;
} STACK;

void push(STACK** top, NODE* data) {
    STACK* new_node = (STACK*)malloc(sizeof(STACK));
    if (new_node == NULL) {
        fprintf(stderr, "Memory allocation failed");
        exit(EXIT_FAILURE);
    }

    new_node->node_address = data;
    new_node->link = *top;
    *top = new_node;
}

int isEmpty(STACK** top) {
    return (*top == NULL);
}

NODE* pop(STACK** top) {
    if (isEmpty(top)) {
        fprintf(stderr, "Stack is empty, cannot pop");
        return NULL;
    }

    STACK* temp = *top;
    NODE* popped_data = temp->node_address;
    *top = temp->link;
    free(temp);

    return popped_data;
}

void inorder_traversal_iterative(NODE* tree_head, STACK** top) {
    NODE* current = tree_head->leftChild;

    while (current != NULL || !isEmpty(top)){
        while (current != NULL) {
            push(top, current);
            current = current->leftChild;
        }

        current = pop(top);
        printf("%d ", current->data);
        current = current->rightChild;
    } 

    printf("\n");
}

// void printInOrder(NODE* root) {
//     if (root != NULL) {
//         printInOrder(root->leftChild);
//         printf("%d ", root->data);
//         printInOrder(root->rightChild);
//     }
//     printf("\n");
// }

//problem 3
typedef struct _threadedTtree {
    short int leftThread;
    struct _threadedTtree* leftChild;
    int data;
    struct _threadedTtree* rightChild;
    short int rightThread;
} THREADEDTTREE;

void binary_to_threaded(NODE* tree_head, STACK** top, THREADEDTTREE* threaded_tree_head, STACK** top_t) {

    threaded_tree_head->leftThread = false;
    threaded_tree_head->leftChild = tree_head->leftChild;
    threaded_tree_head->data = NULL;
    threaded_tree_head->rightChild = tree_head->rightChild;
    threaded_tree_head->rightThread = false;

    NODE* current = tree_head->leftChild;
    THREADEDTTREE* prev = NULL;

    while (current != NULL || !isEmpty(top)) {
        while (current != NULL) {
            // Create a new threaded tree node
            THREADEDTTREE* threadedNode = (THREADEDTTREE*)malloc(sizeof(THREADEDTTREE));
            threadedNode->data = current->data;
            threadedNode->leftThread = 0; // Not a thread
            threadedNode->rightThread = 0; // Not a thread

            // Connect the threaded tree nodes
            if (*threaded_tree_head == NULL) {
                *threaded_tree_head = threadedNode;
            }

            if (prev != NULL) {
                if (prev->rightChild == NULL) {
                    prev->rightChild = threadedNode;
                    prev->rightThread = 1; // Thread
                }
            }

            // Push the threaded tree node onto the stack
            push(top_t, threadedNode);

            // Push the current node onto the stack for later use
            push(top, current);

            // Move to the left child
            current = current->leftChild;
        }

        // Pop a node from the stack
        current = pop(top);

        // Move to the right child
        current = current->rightChild;
    }

    // Thread the rightmost node
    THREADEDTTREE* rightmost = pop(top_t);
    rightmost->rightChild = NULL;
    rightmost->rightThread = 1; // Thread

}

void inorder_traversal_Threaded(THREADEDTTREE* threaded_tree_head) {
    THREADEDTTREE* current = threaded_tree_head->leftChild;

    while (current != NULL) {
        while (current->leftThread == false) {
            current = current->leftChild;
        }

        printf("%d ", current->data);

        while (current->rightThread == true) {
            current = current->rightChild;
            printf("%d ", current->data);
        }

        current = current->rightChild;
    }

    printf("\n");
}

int main(void) {
    /*
    * 1. full binary tree
    */

    int tree_n;
    printf("Enter the number of nodes : ");
    scanf("%d",&tree_n);

    /* generate integer data by random number generation */
    int* item_array = (int*)malloc(tree_n * sizeof(int));
    printf("\nGenerating data\n");
    srand(SEED); //initialize random number generator
    getRandom(item_array, tree_n);

    // tree head pointer, create binary tree
    NODE* tree_head = (NODE*)malloc(sizeof(NODE));
    tree_head -> data = item_array[0];
    tree_head -> leftChild = NULL;
    tree_head -> rightChild = NULL;

    create_complete_binary_tree(tree_head, tree_n, item_array);

    //test
    //printInOrder(tree_head);

    /*
    * 2. inorder traversal using stack
    */

    STACK* top = NULL;
    inorder_traversal_iterative(tree_head, &top);

    /*
    * 3. threaded binary tree
    */
   
    top = NULL;
    THREADEDTTREE* threaded_tree_head;

    STACK* top_t = NULL;
    binary_to_threaded(tree_head, &top, threaded_tree_head, &top_t);
    inorder_traversal_Threaded(threaded_tree_head);

    free(item_array);

    return 0;
}