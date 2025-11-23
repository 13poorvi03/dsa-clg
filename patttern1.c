#include<stdio.h>
int main(){
    for(int i=0; i<4; i++){
        printf("\n");
        
        for(int j=3; j>i; j--){
            printf("  ");
        }
          for(int k=0; k<=i; k++){
            printf(" * ");
          }
          for(int p=1; p<=i; p++){
            printf(" * ");

          }
    }
    return 0;
}