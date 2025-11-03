// Q12. Develop a C program to find the maximum and minimum scores in an array, applying comparative logic for ranking and analysis.
#include <stdio.h>
int main() {
    int scores[] = {45, 67, 23, 89, 12}, n = 5, max, min, i;
    max = min = scores[0];
    for (i = 1; i < n; i++) {
        if (scores[i] > max) max = scores[i];
        if (scores[i] < min) min = scores[i];
    }
    printf("Max: %d\nMin: %d\n", max, min);
    return 0;
}