#include <stdio.h>

int main() {
    int n, i, count = 0;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the array elements:\n");
    for(i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }
    for(i=0; i<n; i++) {
        if(arr[i] < 0) {
            count++;
        }
    }
    printf("Number of negative numbers in the array: %d\n", count);
    return 0;
}
