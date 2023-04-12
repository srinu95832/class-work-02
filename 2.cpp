#include <stdio.h>

void findSecondLargestAndSmallest(int arr[], int n, int *secondLargest, int *secondSmallest) {
    int largest = arr[0];
    int smallest = arr[0];
    for(int i=1; i<n; i++) {
        if(arr[i] > largest) {
            *secondLargest = largest;
            largest = arr[i];
        }
        else if(arr[i] > *secondLargest && arr[i] != largest) {
            *secondLargest = arr[i];
        }
        if(arr[i] < smallest) {
            *secondSmallest = smallest;
            smallest = arr[i];
        }
        else if(arr[i] < *secondSmallest && arr[i] != smallest) {
            *secondSmallest = arr[i];
        }
    }
}

int main() {
    int n, secondLargest, secondSmallest;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the array elements:\n");
    for(int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }
    findSecondLargestAndSmallest(arr, n, &secondLargest, &secondSmallest);
    printf("The second largest number in the array is: %d\n", secondLargest);
    printf("The second smallest number in the array is: %d\n", secondSmallest);
    return 0;
}
