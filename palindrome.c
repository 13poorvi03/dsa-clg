// ...existing code...
#include <stdio.h>

int main(void) {
    char s[] = "abca";
    int n = 0;
    while (s[n]) n++;

    int i = 0, j = n - 1;
    while (i < j && s[i] == s[j]) { i++; j--; }

    if (i >= j) {
        printf("Already palindrome: %s\n", s);
        return 0;
    }

    int ii = i + 1, jj = j;
    while (ii < jj && s[ii] == s[jj]) { ii++; jj--; }
    if (ii >= jj) {
        printf("Remove index %d (char '%c') -> ", i, s[i]);
        for (int k = 0; k < n; k++) if (k != i) putchar(s[k]);
        putchar('\n');
        return 0;
    }

    ii = i; jj = j - 1;
    while (ii < jj && s[ii] == s[jj]) { ii++; jj--; }
    if (ii >= jj) {
        printf("Remove index %d (char '%c') -> ", j, s[j]);
        for (int k = 0; k < n; k++) if (k != j) putchar(s[k]);
        putchar('\n');
        return 0;
    }

    printf("Cannot make palindrome by removing a single character.\n");
    return 0;
}
// ...existing code...