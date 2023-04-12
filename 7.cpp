#include <stdio.h>

int main() {
    int n1, n2, i, j, k;
    printf("Enter the size of the first array: ");
    scanf("%d", &n1);
    int arr1[n1];
    printf("Enter the first array elements in ascending order:\n");
    for(i=0; i<n1; i++) {
        scanf("%d", &arr1[i]);
    }
    printf("Enter the size of the second array: ");
    scanf("%d", &n2);
    int arr2[n2], res[n1+n2];
    printf("Enter the second array elements in ascending order:\n");
    for(i=0; i<n2; i++) {
        scanf("%d", &arr2[i]);
    }
    i = 0;
    j = 0;
    k = 0;
    while(i < n1 && j < n2) {
        if(arr1[i] < arr2[j]) {
            res[k++] = arr1[i++];
        }
        else {
            res[k++] = arr2[j++];
        }
    }
    while(i < n1) {
        res[k++] = arr1[i++];
    }
    while(j < n2) {
        res[k++] = arr2[j++];
    }
    printf("Merged array:\n");
    for(i=0; i<k; i++) {
        printf("%d ", res[i]);
    }
    printf("\n");
    return 0;
}
