// print a given pattern of star right triangle
#include<stdio.h>
int main(){
    int n;
    printf(" enter a number of rows :");
    scanf("%d",&n);
    for(int i=1; i<=n; i++){  //no of rows // n value use hogi
        for( int j=1; j<=i; j++){     // no of stars // jo i ki value hogi uss value se loop work karega aur 
                                     //har baar change hoga jse hi i ki value update hogi and j starting se 1 se chalu hoga
            printf( " * ");
        }
        printf("\n");  //for next line
    }
    return 0;
}



