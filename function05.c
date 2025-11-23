//prototypes

// #include<stdio.h>


// int main(){
// void fun();
// fun();
// return 0;
// }
// void fun (){
//     printf("hello");
// }



///code 2-----

//for factorial-------


// i#nclude<stdio.h>
// int main(){
//     int n;
//     printf(" enter a number : ");
//     scanf("%d",&n);
//     int r;
//     printf("enter r : ");
//     scanf("%d",&r);
//     int nfact =1;  //n!
//     int rfact; //r!
//     int nrfact;  //n-r!
//    for(int i=2;i<=n;i++){
//       nfact = nfact*i;

//     }

//    for(int i=2;i<=r;i++){
//       nfact = nfact*i;
//     }
//     for(int i=2;i<=n-r;i++){
//       nfact = nfact*i;
//     }
//     int ncr = nfact/rfact*nrfact;
//     printf("%d",ncr);
//     return 0;
// }



// ...
// int nfact = 1;  
// int rfact = 1;   
// int nrfact =1 ;  

// for(int i=2; i<=n; i++) {
//   nfact = nfact * i;
// }

// for(int i=2; i<=r; i++) {
//   rfact = rfact * i; 
// }

// for(int i=2; i<=n-r; i++) {
//   nrfact = nrfact * i; 
// }

// int ncr = nfact / (rfact * nrfact);
// // ...
// printf("%d",ncr);
//      return 0;
//  }






//different style code --------


// factorial 

// #include<stdio.h>
// int factorial(int x){
//     int fact = 1;
//     for(int i=2; i<=x; i++){
//         fact =fact*i;
//     }
//     return fact;
// }
// int main(){
//     int n;
//     printf(" enter a number : ");
//     scanf("%d",&n);
//     int r;
//     printf("enter r : ");
//     scanf("%d",&r);

    //for different method of intialization 

    // int nfact = 1;  
    // int rfact = 1;   
    // int nrfact =1 ;  

    // int ncr = nfact/rfact*nrfact;

// 



//   int ncr = factorial(n)/(factorial(r)*factorial(n-r));

//     printf("%d",ncr);
//     return 0;


    //for different method------

    // int a = factorial(4);
    // printf("%d",a);
    // return 0;
//}






//code 3------

//C(n,r)= n!/(r!*(n−r)!)

​



#include<stdio.h>
int factorial(int x){  //for x!
    int fact =1;       //intialization
    for(int i=2; i<x;i++){   //multiple then multiply fact 2 to x  eg. x=5 -->1*2*3*4*5=120
        fact =fact *i ;
    }
    return fact;
}
int combination (int n, int r){    //find C(n,r)
  int ncr = factorial(n)/(factorial(r)*factorial(n-r));  // calling function 3 times fact n, fact r, fact n-r // then use values in formula
    return ncr;
}

int main(){
    int n;
    printf(" enter a number : "); //input
    scanf("%d",&n);
    int r;
    printf("enter r : "); //input
    scanf("%d",&r);
    
    int ncr =combination(n,r); //calling function and store result in ncr variable
      printf("%d",ncr);

    return 0;
}