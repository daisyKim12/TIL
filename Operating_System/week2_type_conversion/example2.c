#include <stdio.h>

int sum_array(int a[], unsigned len) {
    int i;
    int result = 0;

    for (i = 0; i <= len -1; i ++){
        result += a[i];
    }

    return result;
}

int main() {

    int arr[10] = {1,2,3,4,5,6,6,7,1234,3};

    printf("test1: %d\n", sum_array(arr, 8));
    printf("test1: %d\n", sum_array(arr, 5));
    //printf("test1: %d", sum_array(arr, 0));

    return 0;
}