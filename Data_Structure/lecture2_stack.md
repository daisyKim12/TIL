# Stack

## What is a Stack
Stack is a linear data structure that follows a order called LIFO. LIFO is short for last-in-first-out, meaning element inside a Stack can be accessed from only one direction. Only a pointer that points the top element is accessable.

## Implementing a Stack in C
There are various ways to implement a Stack.

1. Using a Array
    - Without Stack object
    - Stack object
2. Using a List


## Composition of Stack
Abstract Data type is define by object and function that specify the attribute of a data type.

### Object
- Stack: A finite ordered list with zero or more element
- Element: Item that populates a stack.
- Max_Stack_Size: Positive integer that saves overall size of a stack.
- Top: Pointer that points the top element.
  
```c
#define Max_Stack_Size = 100;
//element
typedef struct {
    int key:
} element;
element stck[Max_Stack_Size];
//top pointer
int top = -1;
```

```c
#define Max_Stack_Size = 100;

//stack
typedef struct {
    int top;
    int items[Max_Stack_Size];
} Stack;
```

### Function
- Create Stack: Create a empty stack
- IsFull: Stack is full
- IsEmpty: Stack is empty
- Push: Insert an item at the top
- Pop: Remove the item at the top
- Peak: Read the item at the top

```c
//psudo code

Create(){
    // Allocate memory for stack
    // Initialize top as -1
}

IsFull(){
    // Check top is equal to Max_Stack_Size
}

IsEmpty(){
    // Check top is -1
}

Push(){
    if(IsFull())
    {
        //exit
    }
    else
    {
        //increment top
        //add item
    }
}

Pop(){
    if(IsEmpty())
    {
        //exit
    }
    else
    {
        //return top item
        //decrement top
    
    }
}

Peak(){
    //only return top item
}
```


