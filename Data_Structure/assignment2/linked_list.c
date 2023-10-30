#include <stdio.h>
#include <stdlib.h>

typedef struct listNode* listPointer;
typedef struct listNode {
    int data;
    listPointer link;
} listNode;

void printlist(listPointer first);
void insert1(listPointer* first, listPointer x);
void insert2(listPointer first, listPointer x);

// ==========================================
// 1. write your code (return type)
listPointer insert3(listPointer first, listPointer x);
// ==========================================

int main() {
    listPointer first = NULL;
    listPointer NODE1 = malloc(sizeof(listPointer));
    listPointer NODE2 = malloc(sizeof(listPointer));

    // list generation with 2 nodes
    NODE1->data = 11;
    NODE2->data = 22;
    NODE1->link = NODE2;
    NODE2->link = NULL;

    printf("NODE1->NODE2\n");
    printlist(NODE1);
    printf("\n\n");

    printf("Empty list.\n");

    // Select insert function (1)
    //insert1(&first, NULL);
    //insert2(first, NULL);
    // ==========================================
    // 2. write your code (call insert3 function)
    first = insert3(first, NULL);
    // ==========================================

    printlist(first);
    printf("\n\n");

    first = NODE1; // Assign NODE1 as first


    // Select insert function (2)
    //insert1(&first, NODE1);
    //insert2(first, NODE1);
    // ==========================================
    // 3. write your code (call insert3 function)
    first = insert3(first, NODE1);
    // ==========================================

    printf("insert between NODE1 and NODE2.\n");
    printlist(first);
    printf("\n\n");

    return 0;
}

void printlist(listPointer first) {
    listPointer head = first;
    while (head) {
        printf("%d(at %p)-> ", head->data, head);
        head = head->link;
    }
    printf("NULL\n");
}

void insert1(listPointer* first, listPointer x) {
    // new NODE generation
    listPointer temp = malloc(sizeof(listPointer));

    if (*first) { // insert NODE (x->temp->...)
        temp->data = 50;
        temp->link = x->link;
        x->link = temp;
    }
    else { // empty list
        temp->link = NULL;
        temp->data = 50;
        *first = temp;
    }
}

void insert2(listPointer first, listPointer x) {
    // new NODE generation
    listPointer temp = malloc(sizeof(listPointer));

    if (first) { // insert NODE (x->temp->...)
        temp->data = 50;
        temp->link = x->link;
        x->link = temp;
    }
    else { // empty list
        temp->link = NULL;
        temp->data = 50;
        first = temp;
    }
}

// ==========================================
// 4. write your code (return type)
// ==========================================
listPointer insert3(listPointer first, listPointer x) {
    // ==========================================
    // 5. write your code (insert3 function)
    listPointer temp = malloc(sizeof(listPointer));

    if (first) { // insert NODE (x->temp->...)
        temp->data = 50;
        temp->link = x->link;
        x->link = temp;
    }
    else { // empty list
        temp->link = NULL;
        temp->data = 50;
        first = temp;
    }

    return first;
    // ==========================================
}