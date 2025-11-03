// Q16. Implement a C program to insert an element at the front, middle, or end of an array, and print the array before and after insertion.
#include <stdio.h>
int main() {
    int arr[10] = {10, 20, 30, 40, 50}, n = 5, pos = 2, val = 99, i;
    printf("Before insertion: ");
    for (i = 0; i < n; i++) printf("%d ", arr[i]);
    for (i = n; i > pos; i--) arr[i] = arr[i - 1];
    arr[pos] = val;
    n++;
    printf("\nAfter insertion: ");
    for (i = 0; i < n; i++) printf("%d ", arr[i]);
    return 0;
}