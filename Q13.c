// Q13. Design a C program to find a peak element that is not smaller than its neighbours.
#include <stdio.h>
int main() {
    int arr[] = {1, 3, 20, 4, 1, 0}, n = 6, i;
    for (i = 0; i < n; i++) {
        if ((i == 0 || arr[i] >= arr[i - 1]) && (i == n - 1 || arr[i] >= arr[i + 1])) {
            printf("Peak element: %d\n", arr[i]);
            break;
        }
    }
    return 0;
}