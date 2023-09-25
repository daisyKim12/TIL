#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#define MAX 10


// define structure
typedef struct {
    int value;
} element;

// queue structure same shape as node structure 
// queue is only accessed by rear and front pointer so having node structure is suitable
typedef struct queue{
    element data;
    struct queue *link;
} queue;

//typedef for queue pointer
typedef queue* queue_ptr; 

bool isEmpty(queue_ptr n_front);
void isFull(queue_ptr n_front);
void enQueue(queue_ptr front[], queue_ptr rear[], int i, element item);
element deQueue(queue_ptr front[], queue_ptr rear[], int i);

/* Main function */
int main(){

    //making Max number queue object by making Max number of front and rear pointer
    queue_ptr rear[MAX], front[MAX];

    element e1 = {1};
    element e2 = {2};
    element e3 = {3};
    element e4 = {4};
    element e5 = {5};
    element e6 = {6};
    element e7 = {7};
        
    enQueue(front, rear, 1, e1);
    enQueue(front, rear, 1, e2);
    enQueue(front, rear, 2, e3);
    enQueue(front, rear, 2, e4);
    enQueue(front, rear, 2, e5);
    enQueue(front, rear, 3, e6);
    enQueue(front, rear, 3, e7);

    // print queue data
    for(int i = 1; i < 4; i++){     
        printf("<%dth queue>\n", i);
        while(!isEmpty(front[i])) {
            element data = deQueue(front, rear, i);
            printf("\t%d\n",data.value);
        }
    }

    return 0;
}




/* Check if the queue is empty */
// Queue made with linked list only needs to check empty condition which is front == null
bool isEmpty(queue_ptr n_front){
    return (n_front == NULL);
}

/* Check if the queue is full */
// Queue with linked list has no full condition.
void isFull(queue_ptr n_front){ }

/* Function to insert into the queue */
void enQueue(queue_ptr front[], queue_ptr rear[], int i, element item){
    queue_ptr temp = (queue_ptr)malloc(sizeof(queue_ptr));
    temp->data = item;
    temp->link = NULL;

    if(isEmpty(front[i]))
        front[i] = temp;
    else
        rear[i]->link = temp;
    rear[i] = temp;
}

/* Function to delete from the queue */
element deQueue(queue_ptr front[], queue_ptr rear[], int i){
    if(isEmpty(rear[i]))
        exit(0);
    queue_ptr temp = front[i];
    element item = temp->data;
    front[i] = temp -> link;
    free(temp);
    return item;
}
