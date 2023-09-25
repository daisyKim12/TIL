#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#define Max_Queue_Size 12

typedef struct {
   int value;
}Element;

typedef struct {
   int front; 
   int rear;
   Element items[Max_Queue_Size];
}Queue;

/* Check if the queue is empty */
bool isempty(Queue *pqueue){
   if(pqueue->front == pqueue->rear)
      return true;
   return false;
}

/* Check if the queue is full */
bool isfull(Queue *pqueue){
   if(pqueue->front == ((pqueue->rear)+1)%Max_Queue_Size)
      return true;
   return false;
}

/* Function to return the topmost element in the queue */
Element peek(Queue *pqueue){
   return pqueue->items[pqueue->front];
}

/* Function to delete from the queue */
Element deQueue(Queue *pqueue){
   Element temp;
   if(!isempty(pqueue)) {
      temp = pqueue->items[(pqueue->front)];
      pqueue->front = ((pqueue->front)+1)%Max_Queue_Size;
      return temp;
   } else {
      printf("Could not retrieve data, Queue is empty.\n");
      exit(0);
   }
   
}

/* Function to insert into the queue */
void enQueue(Queue *pqueue, Element data){
   if(!isfull(pqueue)) {
      pqueue->items[pqueue->rear] = data;
      pqueue->rear = ((pqueue->rear)+1)%Max_Queue_Size;
   } else {
      printf("Could not insert data, Queue is full.\n");
      exit(0);
   }
}

/* Main function */
int main(){

   Queue my_queue;
   my_queue.rear = 0;
   my_queue.front = 0;
   Queue *pqueue = &my_queue;
   Element e1 = {44};
   Element e2 = {10};
   Element e3 = {4};
   Element e4 = {76};
   Element e5 = {9};
   Element e6 = {23};
   Element e7 = {280};
   
   enQueue(pqueue, e1);
   enQueue(pqueue, e2);
   enQueue(pqueue, e3);
   enQueue(pqueue, e4);
   enQueue(pqueue, e5);
   enQueue(pqueue, e6);
   enQueue(pqueue, e7);
   printf("Element at top of the queue: %d\n" ,peek(pqueue).value);
   printf("Elements: \n");

   // print queue data
   while(!isempty(pqueue)) {
      Element data = deQueue(pqueue);
      printf("%d\n",data.value);
   }

   // printf("Queue full: %s\n" , isfull()?"true":"false");
   // printf("Queue empty: %s\n" , isempty()?"true":"false");
   return 0;
}