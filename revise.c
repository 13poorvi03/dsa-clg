 //solid rectangle

// #include<stdio.h>
// int main(){
//     int n;
//     printf("enter a number : ");
//     scanf("%d",&n);

//     for(int i=1 ; i<=3; i++){ // outer loop  //for no of row
// for(int i=1; i<=n; i++){   // inner loop //for  no of stars
//     printf(" * ");

// }
// printf("\n");
//     }
    

//     return 0;
// }


//print 1234 in rectangle

// #include<stdio.h>
// int main(){
//     int n;
//     printf( "enter a number :");
//     scanf("%d",&n);
//     for(int i=1; i<=n; i++){
//         for ( int j=1; j<=n; j++){
//             printf(" %d ",j);
//         }
//         printf(" \n ");
//     }
//     return 0;

// }



// print right angle triangle with stars
// #include<stdio.h>
// int main(){
//     int n;
//      printf("enter a number :");
//      scanf("%d",&n);
//      for(int i=1;i<=n; i++){
//         for(int j=1; j<=i; j++){
//             printf("*");

//         }
//         printf("\n");
//      }
//      return 0;
// }



//print the given pattern of inverted right triangle
// #include<stdio.h>
// int main(){
//     int n;
//     printf("enter a number : ");
//     scanf("%d",&n);

//     for(int i=1;i<=n;i++){ //for line
//         for(int j=1;j<=n+1-i;j++){ //for stars //
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }



//print the given pattern with 1234
// #include<stdio.h>
// int main(){
//     int n;
//     printf(" enter a number : ");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         for(int j=1; j<=i;j++){
//             printf("%d",j);
//         }
//         printf("\n");
//     }
//     return 0;
    
// }



//print the given pattern 1,1 3,1 3 5, 1 3 5 7
// #include<stdio.h>
// int main(){
//     int n;
//     printf("enter a number : ");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         int a=1;
//         for(int j=1; j<=i;j++){
            
//                 printf(" %d ",a);
//             a=a+2;
//         }
//         printf("\n");
//     }
//     return 0;
// }



//print a square pettern with A B C D
// #include<stdio.h>
// int main(){
//     int n;
//     printf(" enter a number : ");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         int a=1;
//         for(int j=1; j<=n;j++){
//            int d=a+64;   
//             char ch=(char)d; //ch=(char)65 -> ch='A'
//             printf(" %c ",ch);
//             a++;
//          }
//             printf("\n");
//     }
//     return 0;
// }




// print a right angle with A B C D

// #include<stdio.h>
// int main(){
//     int n;
//     printf(" enter a number : ");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         int a=1;
//         for(int j=1; j<=i;j++){
//            int d=a+64;   
//             char ch=(char)d; //ch=(char)65 -> ch='A'
//             printf(" %c ",ch);
//             a++;
//          }
//             printf("\n");
//     }
//     return 0;
// }




// print iverted right angle A B C D


//  #include<stdio.h>
// int main(){
//     int n;
//     printf(" enter a number : ");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         int a=1;
//         for(int j=1; j<=n+1-i;j++){
//            int d=a+64;   
//             char ch=(char)d; //ch=(char)65 -> ch='A'
//             printf(" %c ",ch);
//             a++;
//          }
//             printf("\n");
//     }
//     return 0;
// }


//print the given pattern with 1,A B,1 2 3, A B C D, 1 2 3 4 5
  

//  #include<stdio.h>
//  int main(){
//     int n;
//     printf(" enter a number : ");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         for( int j=1; j<=i;j++){
//             if( i% 2!=0){           // for odd row -> numbers
//                 printf(" %d ",j);
//             }
//             else{                   // for even rows -> letters
//                 printf(" %c ",j+64);
//             }

//         }
//         printf("\n");
//     }
//     return 0;
// }


//print the given pattern of plus

// #include<stdio.h>
// int main(){
//     int n; 
//     printf(" enter a number : ");
//     scanf("%d",&n);
//     for(int i=1; i<=n; i++){
//         for( int j=1; j<=n; j++){
//             if(j==3 || i==3)  //for mid point
//             printf("*");

//             else printf(" ");
//     }
//         printf("\n");
//     }
//     return 0;
    
// }


// print a given star plus pattern

// #include<stdio.h>
// int main(){
//     int n; 
//     printf(" enter a number : ");
//     scanf("%d",&n);
//     for(int i=1; i<=n; i++){
//         for( int j=1; j<=n; j++){
//             int a = n/2+1;
//             if(j==a || i==a)  //for mid point
//             printf("*");

//             else printf(" ");
//     }
//         printf("\n");
//     }
//     return 0;
    
// }


// print star in mid

// #include<stdio.h>
// int main(){
//     int n; 
//     printf(" enter a number : ");
//     scanf("%d",&n);
//     for(int i=1; i<=n; i++){
//         for( int j=1; j<=n; j++){
//             int a = n/2+1;
//             if(j==a && i==a)  //for mid point
//             printf("*");

//             else printf(" a ");
//     }
//         printf("\n");
//     }
//     return 0;
    
// }


//print a hollow rectangle

// #include<stdio.h>
// int main(){
//     int n;
//     printf("enter a number of rows :");
//     scanf("%d",&n);
//     int m;
//     printf(" enter a number of columns:");
//     scanf("%d",&m);
//     for(int i=1; i<=n; i++){
//         for (int j=1;j<=m; j++){
//             if(i==1|| i==n|| j==1|| j==m){
//                 printf(" * ");

//             }
//             else{
//                 printf("   ");
            
            
            
//             }
            
          
//         }
//                     printf("\n");

//     }
//     return 0;
// }



//print the given pattern of star cross

// #include<stdio.h>
// int main(){
//     int n;
//     printf(" enter a number : ");
//     scanf("%d",&n);
//     for(int i=1; i<=n;i++){
//         for(int j=1; j<=n;j++){
//             if(i==j || i+j==n+1) 
//             printf("*");
//             else
//             printf(" ");
//         }
//         printf("\n");
//     }
//     return 0;
// }



//print a given pattern of numbers in right angle triangle

//floyd's triangle 

// #include<stdio.h>
// int main(){
//     int n;
//     printf("enter a number :");
//     scanf("%d",&n);
//     int a =1;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
            
//             printf(" %d ",a);
//             a++;
//         }
//         printf("\n");
//     }
//     return 0;
// }



// print a given pattern 0&1 triangle

// #include<stdio.h>
// int main(){
//     int n;
//     printf(" enter a number of rows : ");
//     scanf("%d",&n);
//     int a;
//     for(int i=1;i<=n;i++){
//         for(int j=1; j<=i;j++){

//             printf(" %d ",a);
//             if(a==0)
//             a=1;
//             else a=0;

//         }
//         printf("\n");
//     }
//     return 0;
// }




