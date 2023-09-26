#include <stdio.h>
#include <stdlib.h>

void CallByValue(int a, int b);
void CallByReference(int *a, int *b);

int main() {
    int i = 100;
    int j = 200;

    printf("Before Swap.\n i = %d, j = %d.\n\n", i,j);

    CallByValue(i, j);
    printf("Call by Value.\n i = %d, j = %d.\n\n", i,j);

    CallByReference(&i, &j);
    printf("Call by Reference.\n i = %d, j = %d.\n\n", i,j);
    return 0;
}

void CallByValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}

void CallByReference(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}