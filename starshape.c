#include <stdio.h>

int main() {
    int n, i, j, w, s, p, m;
    printf("Size (even number >= 4): ");
    if (scanf("%d", &n) != 1 || n < 4 || n % 2 != 0) return 1;

    w = 5 * n + 3;

    // Part 1: Top point
    for (i = 0; i < n; i++) {
        for (j = 0; j < w / 2 - i; j++) printf(" ");
        for (j = 0; j < 2 * i + 1; j++) printf("*");
        printf("\n");
    }

    // Part 2 & 3: Middle bars and Taper
    for (i = 0; i < n; i++) {
        if (i < n / 2) { // Middle bars
            for (j = 0; j < w; j++) printf("*");
        } else { // Taper
            s = (4 * n + 1) - 4 * (i - n / 2);
            p = (w - s) / 2;
            for (j = 0; j < p; j++) printf(" ");
            for (j = 0; j < s; j++) printf("*");
        }
        printf("\n");
    }

    // Part 4: Legs (Simplified)
    for (i = 0; i < n + n / 2; i++) {
        s = n + n / 2 - i;
        m = (4 * n + 3) - 2 * s;
        p = (w - (4 * n + 3)) / 2;
        for (j = 0; j < p; j++) printf(" ");
        for (j = 0; j < s; j++) printf("*");
        for (j = 0; j < m; j++) printf(" ");
        for (j = 0; j < s; j++) printf("*");
        printf("\n");
    }
    return 0;
}