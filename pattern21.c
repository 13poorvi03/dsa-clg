//print a number pyramid
#include<stdio.h>
int main(){
    int n;
    printf("enter a number : ");
    scanf("%d",&n);
    
    
    for(int i=1; i<=n; i++){
        for(int j=1; j<= n-i;j++){ //for space
            printf(" ");
        }
        for(char k=64; k<=(2*i)-1;k++){
            printf("%c",k);
        }
        
          
          printf("\n");
    }
       return 0;
}
