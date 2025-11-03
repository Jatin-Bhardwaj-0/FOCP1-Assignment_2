// Q18. Develop a program to identify and print duplicate elements in an array, or print “-1” if no duplicates exist, applying frequency detection and data validation.
#include <stdio.h>
int main() {
    int arr[] = {2, 10, 10, 100, 2, 10, 11, 2, 11, 2}, n = 10, i, j, printed[10] = {0}, found = 0;
    for (i = 0; i < n; i++) {
        if (printed[i]) continue;
        for (j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                if (!found) found = 1;
                printf("%d ", arr[i]);
                printed[i] = 1;
                break;
            }
        }
    }
    if (!found) printf("-1");
    return 0;
}