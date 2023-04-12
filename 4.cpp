#include <stdio.h>

int main() {
    int n, i, j, index, value;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the array elements:\n");
    for(i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the index or value of the element to be deleted: ");
    scanf("%d", &index);
    value = arr[index];
    for(i=0; i<n; i++) {
        if(arr[i] == value) {
            for(j=i; j<n-1; j++) {
                arr[j] = arr[j+1];
            }
            n--;
            break;
        }
    }
    printf("Updated array:\n");
    for(i=0; i<n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
