//hollow triangle pattern

#include <stdio.h>

int main() {
    int n;
    printf("Enter number of rows: ");
    scanf("%d", &n);

    for(int i=1; i<=n; i++) {
        // Spaces before stars
        for(int j=1; j<=n-i; j++) {
            printf(" ");
        }
        // Stars and hollow
        for(int j=1; j<=2*i-1; j++) {
            if(i==n || j==1 || j==2*i-1)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}