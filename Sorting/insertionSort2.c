#include<stdio.h>

void arrTraversal(int *arr, int size)
{
    for(int i = 0; i < size; i++)
    {
        printf("%d  ",arr[i]);
    }
}

void insertionSort(int *arr, int size)
{   int key, j;
    for(int i = 1; i <= size - 1; i++)
    {
        key = arr[i];
        j = i - 1;
        while(j >= 0 && arr[j] > key)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}

int main()
{
    int arr[6] = {43, 26, 14, 67, 58, 10};
    int size = sizeof(arr) / sizeof(int);

    arrTraversal(arr, size);
    insertionSort(arr, size);
    printf("\n");
    arrTraversal(arr, size);

    return 0;
}