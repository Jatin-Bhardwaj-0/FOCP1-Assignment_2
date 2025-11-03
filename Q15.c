// Q15. Write a C program to cyclically rotate the array clockwise by one position, applying array transformation logic used in scheduling and encryption.
#include <stdio.h>
int main() {
    int arr[] = {1, 2, 3, 4, 5}, n = 5, i, last = arr[n - 1];
    for (i = n - 1; i > 0; i--) arr[i] = arr[i - 1];
    arr[0] = last;
    for (i = 0; i < n; i++) printf("%d ", arr[i]);
    return 0;
}