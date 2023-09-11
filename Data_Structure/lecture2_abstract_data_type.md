# Abstract Data Type


## Primitive Data Type
Standard data types that comes built-in with a programming language, from which other data types are composed is known as primitive data type. It is defined by programming language.

**example**
- boolean
- int
- float
- char

## Non-Primitive Data Type
Data type created from collection of primitive and/or other composite type is referred as composite data type. It is defined by programmers.

**example**
- struct
- class

```c
struct MyStructure {   // Structure declaration
  int myNum;           // Member (int variable)
  char myLetter;       // Member (char variable)
}; // End the structure with a semicolon
```

## Abstract Data Type (ADT)
Abstract Data Type in data structure is a kind of a data type whose behavior is defined with the help of some attributes and some functions. Generally, we write these attributes and functions inside a class or a structure so that we can use an object of the class to use that particular abstract data type.

**example**
- List
- Stack
- Queue

```java
class node{
    
    public:
    
    int data; // to store data in a stack node
    node* next; // to store the address of the next node in the stack
    
    node(int val) // a constructor to initialize stack parameters
    {
        data=val;
        next=NULL;
    }
};

class stack(){
    int count=0; // to count number of nodes in the stack
    
    public:
    
    int top(); // returns value of the node present at the top of the stack
    void push(int val); // creates a node with value = val and put it at the stack top
    void pop(); // removes node from the top of the stack
    bool empty(); // returns true if stack is empty, otherwise returns false  
    int size(); // returns the number of nodes that are present in the stack
};

```