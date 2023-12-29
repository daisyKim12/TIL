#include <iostream>
using namespace std;

template <class T>
void bubbleSort(T* arr, int n) 
{
    for(int i = 0; i<n-1; i++)
        for(int j = n-1; i<j; j--)
            if(arr[j] < arr[j-1])
                swap(arr[j], arr[j-1]);
}

int main()
{
    int arr[5] = {10, 50, 30, 40, 20};
    int n = sizeof(arr) / sizeof(arr[0]);

    bubbleSort<int>(arr, n);

    cout << " Sorted array: ";
    for(int i = 0; i<n; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}

