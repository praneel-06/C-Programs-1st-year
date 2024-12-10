#include <stdio.h>
#include <stdlib.h>

int main() {
    int a[100], n, i, max, min;

    printf("Enter number of elements in array: ");
    scanf("%d", &n);
    if (n <= 0 || n > 100) {
        printf("Invalid");
        return 0;
    }
    printf("Enter elements of array: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    max = min = a[0];
    for(i = 1; i < n; i++) {
        if (a[i] > max) {
            max = a[i];
        }
        if (a[i] < min) {
            min = a[i];
        }
    }
    printf("The max and min values in the array are %d and %d respectively.\n", max, min);
    return 0;
}