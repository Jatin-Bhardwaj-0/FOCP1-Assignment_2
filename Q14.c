// Q14. Develop a C program to count the number of prime numbers in an array.
#include <stdio.h>
int main() {
    int arr[] = {2, 4, 5, 6, 7, 9}, n = 6, i, j, count = 0, isPrime;
    for (i = 0; i < n; i++) {
        if (arr[i] < 2) continue;
        isPrime = 1;
        for (j = 2; j * j <= arr[i]; j++) {
            if (arr[i] % j == 0) {
                isPrime = 0;
                break;
            }
        }
        if (isPrime) count++;
    }
    printf("Total prime numbers: %d\n", count);
    return 0;
}