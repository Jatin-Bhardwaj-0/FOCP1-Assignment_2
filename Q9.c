// Q9. Design a C program to find the first occurrence of the score “99” in an array, focusing on linear search and data retrieval techniques.
#include <stdio.h>
int main() {
    int arr[] = {45, 67, 99, 23, 99, 88}, n = 6, i;
    for (i = 0; i < n; i++) {
        if (arr[i] == 99) {
            printf("First occurrence at index %d\n", i);
            break;
        }
    }
    if (i == n) printf("99 not found\n");
    return 0;
}