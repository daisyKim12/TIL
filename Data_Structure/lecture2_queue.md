# Queue

## What is a Queue
Queue is a data structure that follow a order of FIFO, short for first in first out. Queue can be constructed with linear structure or circular structure, but for efficiency circular queue is widely used. Two pointer is needed that points the rear and front of the data structure, at rear a new element is added and at the front an element is deleted. Only from rear and front a element can be accessed.

## Implementing a Queue in C
There are various ways to implement a Queue.

1. Linear queue(not used)
2. Circular queue
3. Queue using list

## Composition of Queue
Abstract Data type is define by object and function that specify the attribute of a data type.

### Object
- Queue: A finite ordered list with zero or more element
- Element: Item that populates a stack.
- Max_Stack_Size: Positive integer that saves overall size of a stack.
- Rear: Pointer that points the rear of the queue.
- Front: Pointer that points the front of the queue.

```c
#define Max_Queue_Size 100

typedef struct {
    int front, rear;
    int items[Max_Queue_Size];
}Queue;
```


### Function
- Create
- Initialize: Make queue empty.
- IsFull: Check if queue is full.
- IsEmpty: Check if queue is empty.
- EnQueue: Insert an item at the rear.
- DeQueue: Remove the item at the front.
- Peak: Read the item at the front.

```c
// psudo code

void InitQ(){
    //be aware that front and rear must be initialize as 0 not -1
    front = rear = 0;
}

bool IsFull(){
    return front == (rear+1)%Max_Queue_Size;
}

bool IsEmpty(){
    return front == rear;
}

int Peak(){
    //check empty and exit

    return items[front];
}

void EnQueue(int item) {
    //check full and exit

    items[rear] = item;
    rear = (rear+1)%Max_Queue_Size;
}

int DeQueue() {
    //check empty and exit
    int temp = items[front];
    front = (front + 1)%Max_Queue_Size
    return temp;
}
```