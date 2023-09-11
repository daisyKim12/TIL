# Stack
A stack is an ordered list in which insertions and deletions are made at one end called the top.
The stack imply that if we add the elements A, B, C, D, E to the stack, in that order, then E is the first element we delete from the stack. Since the last element inserted into a stack is the first element removed, a stack is also known as a Last-In-First-Out (LIFO) list.

**Abstract Data Type of Stack**
```
structure Stack is
    objects: a finite ordered list with zero or more elements.
    functions:
        for all stack is an instance of Stack, item an instance of element, max_size an integer.
        Stack CreateS(max-stack-size):
            create an empty stack whose maximum size is max-stack-size 
        Boolean IsFull(stack, int max-stack-size):
            if (number of elements in stack == max-stack-size)
                return TRUE
            else return FALSE
        Stack Add(stack, item):
            if (IsFull(stack) 
                stack_full()
                else insert item into top of stack and return 
        Boolean IsEmpty(stack):
            if (stack == CreateS(max-stack-size)) 
                return TRUE
            else return FALSE
        Element Delete(stack):
            if (IsEmpty(stack)) return
            else remove and return the item on the top of the stack.
```