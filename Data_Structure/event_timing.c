#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/*
There are 2 ways to evalutate event time consumption
 1. using clock() function, which returns clock_t type
 2. using time() function, which returns time_t type
*/


void swap(int *n1, int *n2);
void selectionSort(int arr[], int n);
void printArray(int arr[], int size);

int main(void) {
    
    int arr[1000];
    srand(0);
    int i;
    for (i = 0; i < 1000; i++) {
        arr[i] = rand();
    }
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("Unsorted array: \n");
    printArray(arr, n);

    //clock_t start = clock();
    time_t start = time(NULL);
    selectionSort(arr, n);
    //clock_t end = clock();
    time_t end = time(NULL);
    printf("Sorted array: \n");
    printArray(arr, n);

    //printf("Calculation time: %lf\n", (double)(start-end));
    printf("Calculation time: %lf\n", (double)difftime(end, start));
    return 0;
}

void swap(int *n1, int *n2) {
    int temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}

void selectionSort(int arr[], int n) {
    int i, j, min_idx;

    for(i = 0; i<n-1; i++) {
        min_idx = i;
        for(j = i + 1; j<n; j++){
            if(arr[j] < arr[min_idx]){
                min_idx = j;
            }

            if(min_idx != i) {
                swap(&arr[min_idx], &arr[i]);
            }
        }
    }
}

void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < 20; i++)
        printf("%d ", arr[i]);
    printf("...\n");
}