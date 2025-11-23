
//print star pyramid

// #include<stdio.h>
// int main(){
//     int n;
//     printf("enter a number : ");
//     scanf("%d",&n);
    
    
//     for(int i=1; i<=n; i++){
//         for(int j=1; j<= n-i;j++){ //for space
//             printf(" ");
//         }
//         for(int k=1; k<=(2*i)-1;k++){
//             printf("*",k);
//         }
        
          
//           printf("\n");
//     }
//        return 0;
// }




//print inverted star pyramid

// #include<stdio.h>
// int main(){
//     int n;
//     printf("enter a number : ");
//     scanf("%d",&n);
    
    //     for(int i= n-1; i>=1; i--){
    //     for(int j=n; j>i ;j--){ //for space
    //         printf(" ");
    //     }
    //     for(int k=1; k<=(2*i)-1;k++){
    //         printf("*",k);
    //     }
        
          
    //       printf("\n");
    // }

//      return 0;
// }





/////  print diamond


#include<stdio.h>
int main(){
    int n;
    printf("enter a number : ");
    scanf("%d",&n);


// upper triangle
    for(int i=1; i<=n; i++){
        for(int j=i; j<n ;j++){ //for space
            printf(" ");
        }
        for(int k=1; k<=(2*i)-1;k++){
            printf("*",k);
        }
        
          
          printf("\n");
    }

    //lower triangle

            for(int i= n-1; i>=1; i--){
        for(int j=n; j>i ;j--){ //for space
            printf(" ");
        }
        for(int k=1; k<=(2*i)-1;k++){
            printf("*",k);
        }
        
          
          printf("\n");
    }
    return 0;
}

