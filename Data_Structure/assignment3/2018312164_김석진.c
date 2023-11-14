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

// Function to create a complete binary tree
void create_complete_binary_tree(NODE* tree_head, int node_number, int* item_array) {
    // Iterate through the given array of items to create nodes
    for (int i = 0; i < node_number; i++) {
        // Create a new node and allocate memory for it
        NODE* current = (NODE*)malloc(sizeof(NODE));
        current->data = item_array[i];
        current->leftChild = NULL;
        current->rightChild = NULL;

        // Add the newly created node to the queue
        AddQ(current);
    }
    
    // Print elements in the queue for debugging purposes
    printf("Elements in the queue: ");
    for (int j = front + 1; j <= rear; j++) {
        printf("%d ", tree_queue[j]->data);
    }
    printf("\n");
    
    // Extract the head node from the queue
    tree_head->leftChild = tree_queue[0];
    tree_head->rightChild = tree_head;

    // Connect the nodes to form a complete binary tree
    for(int i = 0; i < node_number; i++) {
        // Connect the left child if it exists
        if(2*i+1 < node_number) {
            tree_queue[i]->leftChild = tree_queue[2*i + 1];
        } else {
            tree_queue[i]->leftChild = NULL;
        }

        // Connect the right child if it exists
        if(2*i+2 < node_number) {
            tree_queue[i]->rightChild = tree_queue[2*i + 2];
        } else {
            tree_queue[i]->rightChild = NULL;
        }
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

// Function to perform iterative inorder traversal on a binary tree
void inorder_traversal_iterative(NODE* tree_head, STACK** top) {
    // Start with the leftmost node
    NODE* current = tree_head->leftChild;

    // Continue traversal until the current node is NULL and the stack is empty
    while (current != NULL || !isEmpty(top)) {
        // Traverse all the way to the leftmost node in the current subtree
        while (current != NULL) {
            // Push each node encountered on the way to the left onto the stack
            push(top, current);
            current = current->leftChild;
        }

        // Pop the top node from the stack (current subtree's leftmost node)
        current = pop(top);

        // Print the data of the popped node (inorder traversal)
        printf("%d ", current->data);

        // Move to the right child of the popped node
        current = current->rightChild;
    }

    // Print a newline character to separate the output for readability
    printf("\n");
}


//problem 3
typedef struct _threadedTtree {
    short int leftThread;
    struct _threadedTtree* leftChild;
    int data;
    struct _threadedTtree* rightChild;
    short int rightThread;
} THREADEDTTREE;

void printInOrder(NODE* root) {
    if (root != NULL) {
        printInOrder(root->leftChild);
        printf("%d ", root->data);
        printInOrder(root->rightChild);
    }
    printf("\n");
}

void binary_to_threaded(NODE* tree_head, STACK** top, THREADEDTTREE** threaded_tree_head, STACK** top_t) {
    // Initialize the threaded tree
    *threaded_tree_head = (THREADEDTTREE*)malloc(sizeof(THREADEDTTREE));
    (*threaded_tree_head)->leftChild = NULL;
    (*threaded_tree_head)->rightChild = *threaded_tree_head;
    (*threaded_tree_head)->leftThread = false;
    (*threaded_tree_head)->rightThread = false;

    // Initialize current node pointers for the original and threaded trees
    NODE* current = tree_head->leftChild;
    THREADEDTTREE* current_t = *threaded_tree_head;

    // Temporary array to store nodes and threaded tree nodes during traversal
    int top_temp = 0;
    THREADEDTTREE* STACK_temp[max_queue_size];

    // Traverse the original binary tree and create the corresponding threaded tree
    while (current != NULL || !isEmpty(top)) {
        // Traverse the left subtree and create threaded nodes
        while (current != NULL) {
            THREADEDTTREE* temp = (THREADEDTTREE*)malloc(sizeof(THREADEDTTREE));
            temp->leftChild = NULL;
            temp->rightChild = NULL;
            temp->data = current->data;
            temp->leftThread = false;
            temp->rightThread = false;

            // Connect the threaded node to the threaded tree
            current_t->leftChild = temp;

            // Push the original node and threaded node onto the stacks
            push(top, current);
            STACK_temp[top_temp++] = current_t;

            // Move to the left child
            current_t = current_t->leftChild;
            current = current->leftChild;
        }

        // Pop the original node from the stack
        current = pop(top);

        // Create a threaded node for the right child
        THREADEDTTREE* temp = (THREADEDTTREE*)malloc(sizeof(THREADEDTTREE));
        temp->leftChild = NULL;
        temp->rightChild = NULL;
        temp->data = current->data;
        temp->leftThread = false;
        temp->rightThread = false;
        printf("%d ", temp->data);
        
        // Connect the right child of the threaded node
        current_t = STACK_temp[--top_temp];
        current_t->rightChild = temp;

        // Move to the right child
        current = current->rightChild;
    }

    // Reset the temporary variables for the second traversal
    top_temp = 0;

    // Connect right and left threads in the threaded tree
    THREADEDTTREE* current_k = (*threaded_tree_head)->leftChild;
    while (current_k != NULL || top_temp > 0) {
        // Traverse the left subtree of the threaded tree
        while (current_k != NULL) {
            // Push the threaded node onto the stack
            STACK_temp[top_temp++] = current_k;

            // Move to the left child
            current_k = current_k->leftChild;
        }

        // Pop the threaded node from the stack
        current_k = STACK_temp[--top_temp];

        // If the left child is NULL, connect the left thread
        if (current_k->leftChild == NULL) {
            current_k->leftChild = STACK_temp[--top_temp];
            current_k->leftThread = true;
        }

        // Move to the right child
        current_k = current_k->rightChild;
    }

    // Free dynamically allocated memory for threaded tree nodes
    for (int i = 0; i < top_temp; ++i) {
        free(STACK_temp[i]);
    }

}


// Function to perform inorder traversal on a threaded binary tree
void inorder_traversal_Threaded(THREADEDTTREE* threaded_tree_head) {
    // Start with the leftmost threaded node
    THREADEDTTREE* current = threaded_tree_head;

    // Traverse the threaded binary tree using the threaded links
    while (current != NULL) {
        // Move to the leftmost threaded node in the current subtree
        while (current->leftThread == false) {
            current = current->leftChild;
        }

        // Print the data of the threaded node
        printf("%d ", current->data);

        // Move to the right threaded node (if available)
        while (current->rightThread == true) {
            current = current->rightChild;
            printf("%d ", current->data);
        }

        // Move to the right child (actual child, not threaded) of the threaded node
        current = current->rightChild;
    }

    // Print a newline character to separate the output for readability
    printf("\n");
}



int main(void) {
    /*
    * 1. full binary tree
    */

    int tree_n;
    printf("<Problem1>\n");
    printf("Enter the number of nodes : ");
    scanf("%d",&tree_n);

    /* generate integer data by random number generation */
    int* item_array = (int*)malloc(tree_n * sizeof(int));
    printf("\nGenerating data...\n");
    srand(SEED); //initialize random number generator
    getRandom(item_array, tree_n);

    // tree head pointer, create binary tree
    NODE* tree_head = (NODE*)malloc(sizeof(NODE));
    tree_head -> data = item_array[0];
    tree_head -> leftChild = NULL;
    tree_head -> rightChild = NULL;
    
    printf("Creating complete binary tree...\n");
    create_complete_binary_tree(tree_head, tree_n, item_array);

    /*
    * 2. inorder traversal using stack
    */

    printf("<Problem2>\n");
    printf("Inorder Traversal\n");

    STACK* top = NULL;
    inorder_traversal_iterative(tree_head, &top);

    /*
    * 3. threaded binary tree
    */

    printf("<Problem3>\n");
    top = NULL;
    THREADEDTTREE* threaded_tree_head;

    STACK* top_t = NULL;
    binary_to_threaded(tree_head, &top, &threaded_tree_head, &top_t);
    inorder_traversal_Threaded(threaded_tree_head);

    free(item_array);

    // Free allocated memory
    free(item_array);


    return 0;
}