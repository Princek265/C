#include <stdio.h>

/* Function to perform insertion sort on array arr of size n */
void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {        // (A) outer loop: pick element at index i as the "key"
        int key = arr[i];               // (B) key: the value we want to insert into the sorted left side
        int j = i - 1;                  // (C) j: index of last element in the sorted portion

        /* (D) Shift elements of arr[0..i-1] that are greater than key
               one position to the right to make space for key. */
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];        // (E) move arr[j] rightwards 
            j = j - 1;                  // (F) move j left
        }
        
        for(int x=0;x<n;x++){
            printf("%d ",arr[x]);
        }
        printf("\n");
        /* (G) Insert key into its correct position.
           After the while loop, j is index of element <= key (or -1 if none),
           so correct position is j+1. */
        arr[j + 1] = key;
    }
}


/* Helper to print array */
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main(void) {
    int arr[] = {12, 11, 13, 5, 6};      // sample array to sort
    int n = sizeof(arr) / sizeof(arr[0]); // compute number of elements

    printf("Before sorting: ");
    printArray(arr, n);

    insertionSort(arr, n);

    printf("After sorting:  ");
    printArray(arr, n);

    return 0;
}
