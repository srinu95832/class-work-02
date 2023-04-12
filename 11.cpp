#include <stdio.h>

int main() {
    int n, i, search, pos = -1;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the array elements:\n");
    for(i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to search: ");
    scanf("%d", &search);
    for(i=0; i<n; i++) {
        if(arr[i] == search) {
            pos = i;
            break;
        }
    }
    if(pos == -1) {
        printf("Element not found in the array\n");
    } else {
        printf("Element found at position %d\n", pos+1);
    }
    return 0;
}
