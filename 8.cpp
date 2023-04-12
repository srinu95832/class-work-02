#include <stdio.h>

int isComposite(int num) {
    int i;
    if(num <= 1) {
        return 0;
    }
    for(i=2; i<=num/2; i++) {
        if(num % i == 0) {
            return 1;
        }
    }
    return 0;
}

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
        if(isComposite(arr[i])) {
            count++;
        }
    }
    printf("Number of composite numbers in the array: %d\n", count);
    return 0;
}
