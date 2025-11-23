// print alphabet triqangle
#include<stdio.h>
int main(){
   int n;
   printf(" enter a number : ");
   scanf("%d",&n);
   char ch=64;
   for( int i=1; i<=n ;i++){ // for rows
    for( int j=1;j<=n-i;j++){ //for space
       
       printf(" ");
       

    }
       for(int k=1;k<=i;k++){
        
        printf(" %c ",ch);
        ch++;
        
       } 
       
    
    printf("\n");
   } 
   return 0;
}