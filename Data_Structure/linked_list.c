#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#define MAX 12

typedef struct node{
   
    int data;
    struct node* link;
}node;

typedef node* node_ptr;


node_ptr createNode(int first_data){
    // Allocate a single node using malloc
    node_ptr first = (node_ptr)malloc(sizeof(node_ptr));

    // set data and link in first node
    first -> data = first_data;
    // link must be NULL initially
    first -> link = NULL;

    return first;
}

void insert(node_ptr *first, node_ptr x, int data){
    // insert add a new node after position x
    // after means where x_link is pointing

    // Allocate a single node with a data I want to insert
    node_ptr new = (node_ptr)malloc(sizeof(node_ptr));
    new -> data = data;

    // Check if list is empty
    if (*first == NULL){
        new -> link = NULL;
        *first = new;
    }

    else {
        new -> link = x -> link;
        x -> link = new;
    }

}

void delete(node_ptr *first, node_ptr trail, node_ptr x){
    // trail is a pointer that points a node before node x
    // before means that trail_link points x    

    if(trail)
        trail->link = x->link;
    else
        *first = (*first)->link;
    free(x);

}

void print(node_ptr first) {
    //print until first points NULL
    //increment first by first = first->link

    for( ; first; first = first->link) {
        printf("%d\n", first -> data);
    }
}

/* Main function */
int main() {
    node_ptr first = NULL;

    // Test the linked list functions
    insert(&first, NULL, 1); // Insert 1 at the beginning
    insert(&first, first, 2); // Insert 2 after 1
    insert(&first, first->link, 3); // Insert 3 after 2

    printf("Linked List: \n");
    print(first);

    delete(&first, NULL, first); // Delete the first node
    printf("Linked List after deleting the first node: \n");
    print(first);

    return 0;
}