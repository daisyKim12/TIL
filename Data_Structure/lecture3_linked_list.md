# Linked List

## What is linked list
Linked List data type is made in a need of resolving a weekness of a Array. Array is good at finding a value in a certain index, but has a number of disadventage. The size of a array is fixed with static storage allocation, and some opteration is time consuming in a array. Insertion and deletion is hard to implement using an array.

Linked List resolve this problem by saving element is a node and these node saes links which connects other node. The property of a list are that the size of a list is changable while running, and insertion and deletion is easy when using a list data structure.

## Composition of Queue
Abstract Data type is define by object and function that specify the attribute of a data type.

### Object
- List
  - List object has a single list pointer that points the points the list, also pointing the last element that was added.
- Node
  - Data
  - Link
```c
//list pointer
typedef list_node * list_ptr

//list_node
typedef struct {
    char data[4];
    list_ptr link;
} list_node;
```

### Function
- create: Create a single node list with the node_link as NULL
- insert: Insert a new node in particular position inside a list.
- delete: Delete a node in particular position inside a list.
- print: Print a whole list

```c
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
```