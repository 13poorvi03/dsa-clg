#include<stdio.h>
int main(){

    for(int i =0; i<4; i++){  
        for(int j=0; j<i*2; j++) {         
            printf(" ");
        } //inner loop 
        for( int k=0; k<4; k++) {  //print 4 * per line
            printf(" * ");
        }
        printf("\n");  //move to next line
    }
    return 0;
}