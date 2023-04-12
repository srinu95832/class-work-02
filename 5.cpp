#include <stdio.h>

int main() {
    int n, i, j, k;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n], res[n];
    printf("Enter the array elements:\n");
    for(i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }
    for(i=0, k=0; i<n; i++) {
        for(j=0; j<k; j++) {
            if(arr[i] == res[j]) {
                break;
            }
        }
        if(j == k) {
            res[k++] = arr[i];
        }
    }
    printf("Array after removing duplicates:\n");
    for(i=0; i<k; i++) {
        printf("%d ", res[i]);
    }
    printf("\n");
    return 0;
}
