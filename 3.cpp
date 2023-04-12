#include <stdio.h>

int findOddElement(int arr[], int n) {
    int count = 0, oddElement = -1;
    for(int i=0; i<n; i++) {
        if(arr[i] == arr[0]) {
            count++;
        }
        else {
            count--;
        }
        if(count == -1) {
            oddElement = arr[i];
            count = 0;
        }
    }
    return oddElement;
}

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the array elements (only two different elements):\n");
    for(int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }
    int oddElement = findOddElement(arr, n);
    if(oddElement == -1) {
        printf("There is no odd element in the array.\n");
    }
    else {
        printf("The odd element in the array is: %d\n", oddElement);
    }
    return 0;
}
