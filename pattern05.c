//print a given pattern (downward star triangle)

#include<stdio.h>
int main(){
    int n;
    printf(" enter a number of rows:");
    scanf("%d",&n);
    for(int i=1; i<=n; i++){  //no of rows
        for(int j=1; j<=n+1-i; j++){  // no of stars  //i+j=n+1 so thats why j=n+1-i
            printf(" * ");

        }
        printf("\n");
    }
    
}


//same pattern in different code

#include<stdio.h>
int main(){
    int n;
    printf(" enter a number of rows:");
    scanf("%d",&n);
    int a=n;
    for( int i=1; i<=n; i++){
        for(int j=1; j<=a; j++){
            printf(" * ");

        }
        a--;
        printf("\n");
    }
}