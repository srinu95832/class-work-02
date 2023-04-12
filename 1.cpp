#include <stdio.h>

void findLargestTwo(int arr[], int n, int *max1, int *max2) {
    *max1 = arr[0];
    *max2 = arr[1];
    for(int i=2; i<n; i++) {
        if(arr[i] > *max1) {
            *max2 = *max1;
            *max1 = arr[i];
        }
        else if(arr[i] > *max2 && arr[i] != *max1) {
            *max2 = arr[i];
        }
    }
}

int main() {
    int n, max1, max2;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the array elements:\n");
    for(int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }
    findLargestTwo(arr, n, &max1, &max2);
    printf("The largest two numbers in the array are: %d and %d", max1, max2);
    return 0;
}
