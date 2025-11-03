// Q17. Design a C program to delete an element from the front, middle, or end of an array, and print the array before and after deletion.
#include <stdio.h>
int main() {
    int arr[10] = {10, 20, 30, 40, 50}, n = 5, pos = 2, i;
    printf("Before deletion: ");
    for (i = 0; i < n; i++) printf("%d ", arr[i]);
    for (i = pos; i < n - 1; i++) arr[i] = arr[i + 1];
    n--;
    printf("\nAfter deletion: ");
    for (i = 0; i < n; i++) printf("%d ", arr[i]);
    return 0;
}