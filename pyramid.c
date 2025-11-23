//print the star pyramid
#include<stdio.h>
int main(){
    int n;
    printf("enter a number : ");
    scanf("%d",&n);
    int nst =1;
    for(int i=1; i<=n; i++){
        for(int j=1; j<= n-i;j++){ //for space
            printf(" ");
        }
        for(int k=1; k<=nst;k++){
            printf("*");
        }
        
          nst=nst+2;
          printf("\n");
    }
       return 0;
}








//print the star pyramid
// #include<stdio.h>
// int main(){
//     int n;
//     printf("enter a number : ");
//     scanf("%d",&n);
//     int nst =1;
//     int nsp =3;
//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=nsp;j++){ //for space
//             printf(" ");
//         }
//         nsp = nsp-1;
//         for(int k=1; k<=nst;k++){
//             printf("*");
//         }
        
//           nst=nst+2;
//           printf("\n");
//     }
//        return 0;
// }