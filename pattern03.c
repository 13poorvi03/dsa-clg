//wap to print a given pattern of 1234 in rectangle
#include<stdio.h>
int main(){
    int n;
    printf("enter a number of rows :");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){       //no of rows/lines //how many times loop run of 1 to n
        for(int j=1; j<=n;j++){    //no of coloumns  //print a no 1 to n 
            printf(" %d ",j);   //print a 1 to n number
        }
        printf("\n");
    }
    return 0;

}
