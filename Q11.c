// Q11. Develop a C program to traverse an array of scores, determine whether each score is even or odd using conditional logic, and store them into two separate arrays — even_array and odd_array.
#include <stdio.h>
int main() {
    int scores[] = {12, 7, 9, 14, 6}, n = 5, even[5], odd[5], e = 0, o = 0, i;
    for (i = 0; i < n; i++) {
        if (scores[i] % 2 == 0) even[e++] = scores[i];
        else odd[o++] = scores[i];
    }
    printf("Even array: ");
    for (i = 0; i < e; i++) printf("%d ", even[i]);
    printf("\nOdd array: ");
    for (i = 0; i < o; i++) printf("%d ", odd[i]);
    return 0;
}