//print rhombus with star
#include<stdio.h>
int main(){
    int n;
    printf("enter a number : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1; j<=n-i;j++){   //for leading spaces
            printf(" ");

        }
        
            for(int m=1;m<=n;m++){  //for printing stars, stars per row 
                printf(" * ");
            }
        
        printf("\n");
    }
    return 0;
}