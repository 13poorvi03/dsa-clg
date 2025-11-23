#include<stdio.h>
int main(){
    for(int i=0; i<4; i++){
        for(int j=0; j<=i; j++){
            printf("*");
        }
        for(int k=4; k>i; k--){
            printf("");
        }
        for( int p=4; p>i; p--){
            printf("\n");
        }
        for( int z=0; z<=i;z++) {
            printf("*");
        }
printf("\n");
    }
    return 0;
}
