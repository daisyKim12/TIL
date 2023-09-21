#include <stdio.h>
#include <stdbool.h>
#define Max_Stack_Size 8

typedef struct {
   int value;
}Element;

typedef struct {
   int top;
   Element items[Max_Stack_Size];
}Stack;

/* Check if the stack is empty */
bool isempty(Stack *pstack){
   if(pstack->top == -1)
      return true;
   else
      return false;
}

/* Check if the stack is full */
bool isfull(Stack *pstack){
   if(pstack->top == Max_Stack_Size-1)
      return true;
   else
      return false;
}

/* Function to return the topmost element in the stack */
Element peek(Stack *pstack){
   return pstack->items[pstack->top];
}

/* Function to delete from the stack */
Element pop(Stack *pstack){
   if(!isempty(pstack)) {
      return pstack->items[(pstack->top)--];
   } else {
      printf("Could not retrieve data, Stack is empty.\n");
      //exit(1);
   }
}

/* Function to insert into the stack */
void push(Stack *pstack, Element data){
   if(!isfull(pstack)) {
      pstack->items[++(pstack->top)] = data;
   } else {
      printf("Could not insert data, Stack is full.\n");
      //exit(1);
   }
}

/* Main function */
int main(){

   Stack my_stack = {-1,};
   Stack *pstack = &my_stack;
   Element e1 = {44};
   Element e2 = {10};
   Element e3 = {4};
   Element e4 = {76};
   Element e5 = {9};
   Element e6 = {23};
   Element e7 = {280};
   
   push(pstack, e1);
   push(pstack, e2);
   push(pstack, e3);
   push(pstack, e4);
   push(pstack, e5);
   push(pstack, e6);
   push(pstack, e7);
   printf("Element at top of the stack: %d\n" ,peek(pstack).value);
   printf("Elements: \n");

   // print stack data
   while(!isempty(pstack)) {
      Element data = pop(pstack);
      printf("%d\n",data.value);
   }

   // printf("Stack full: %s\n" , isfull()?"true":"false");
   // printf("Stack empty: %s\n" , isempty()?"true":"false");
   return 0;
}