#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#define MAX 10


// define structure
typedef struct {
    int value;
} element;

// stack structure same shape as node structure 
// stack is only accessed by top pointer so having node structure is suitable
typedef struct stack{
    element data;
    struct stack *link;
} stack;

//typedef for stack pointer
typedef stack* stack_ptr; 

bool isempty(stack_ptr n_top);
void isfull(stack_ptr n_top);
void push(stack_ptr top[], int i, element item);
element pop(stack_ptr top[], int i);

/* Main function */
int main(){

    //makeing Max number stack object by making Max number of stack top pointer
    stack_ptr top[MAX];


    element e1 = {1};
    element e2 = {2};
    element e3 = {3};
    element e4 = {4};
    element e5 = {5};
    element e6 = {6};
    element e7 = {7};
        
    push(top, 1, e1);
    push(top, 1, e2);
    push(top, 2, e3);
    push(top, 2, e4);
    push(top, 2, e5);
    push(top, 3, e6);
    push(top, 3, e7);

    // print stack data
    for(int i = 1; i < 4; i++){     
        printf("<%dth stack>\n", i);
        while(!isempty(top[i])) {
            element data = pop(top, i);
            printf("\t%d\n",data.value);
        }
    }

    return 0;
}

/* Check if the stack is empty */
// Stack made with linked list only needs to check empty condition
bool isempty(stack_ptr n_top){
    if(!n_top)
        return true;
    return false; 
}

/* Check if the stack is full */
// Stack with linked list has no full condition.
void isfull(stack_ptr n_top){ }

/* Function to insert into the stack */
void push(stack_ptr top[], int i, element item){
    stack_ptr temp = (stack_ptr)malloc(sizeof(stack_ptr));
    temp->data = item;
    temp->link = top[i];
    top[i] = temp;
}

/* Function to delete from the stack */
element pop(stack_ptr top[], int i){
    if(isempty(top[i]))
        exit(0);
    stack_ptr temp = top[i];
    element item = temp->data;
    top[i] = temp -> link;
    free(temp);
    return item;
}
