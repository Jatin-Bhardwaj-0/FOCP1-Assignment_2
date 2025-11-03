// Q10. Implement a program to find who and how many students scored “99” in the marks array, emphasising data scanning and frequency counting.
#include <stdio.h>
int main() {
    int marks[] = {99, 85, 99, 70, 99, 60}, n = 6, i, count = 0;
    for (i = 0; i < n; i++) {
        if (marks[i] == 99) {
            printf("Student %d scored 99\n", i + 1);
            count++;
        }
    }
    printf("Total students who scored 99: %d\n", count);
    return 0;
}