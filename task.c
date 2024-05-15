#include <stdio.h>

void rearrangeArray(int arr[], int size, int newOrder[]) {
    int temp[size];
    for (int i = 0; i < size; i++) {
        temp[i] = arr[newOrder[i]];
    }
    for (int i = 0; i < size; i++) {
        arr[i] = temp[i];
    }
}

int main() {
    int arr[] = {15, 628, 971, 9, 2143, 12};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    // The new order index array
    int newOrder[] = {2, 3, 1, 4, 0, 5};
    
    rearrangeArray(arr, size, newOrder);
    
    printf("Rearranged array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}
