//code---1
// #include<stdio.h>
// int main(){
//     int arr[5]={4,5,9,4,5};
//     int xor=0;
//     for(int i=0;i<5;i++){
//         xor=xor^arr[i];
//     }
//     printf("%d",xor);
    
// }

// a=5
// a=a+b
// b=a-b
// a=a-b

//code--2
// #include<stdio.h>
// int main(){
//     int a=5;
//     int b=3;
//     a=a^b;
//     b=a^b;
//     a=a^b;
//    printf("%d\n",a);
//    printf("%d",b);   
// }


//code---3

// #include<stdio.h>
// int main(){
//     int arr[4]={1,2,4,5};
//     int xor=0;
//     int xor2=0;
//     for(int i=0;i<5;i++){
//      xor=xor^arr[i];
//     }
//     for(int i=0;i<4;i++){
//         xor2=xor2^arr[i];
//     }
//     int missing =xor^xor2;
//     printf("missing number is :%d",missing);
//     return 0;
// }

//code----for right shift

// #include <stdio.h>

// int main() {
//     int num = 20;
//     int result = num >> 1; 

//     printf("%d\n", result);
//     return 0;
// }

//code----for left shift

// #include <stdio.h>

// int main() {
//     int num = 20;
//     int result = num << 1; 

//     printf("%d\n", result);
//     return 0;
// }