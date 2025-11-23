// #include<stdio.h>
// void fun (int a){


// }
 
// int main(){
// int arr[5]={2,7,3,9,4};
// fun(arr);


// return 0;

// }




























// sum of an array

// #include<stdio.h>
// int main(){
//     int arr[5]={2,7,3,9,4};
//     int sum=0;
//     for(int i=0; i<5; i++){
//         sum=sum+arr[i];
//     }
//     printf("the sum of array is %d",sum);
//     return 0;

// }


//userinput
// #include<stdio.h>

// int main(){
//  int n;
//  printf(" enter the size of array : ");
//  scanf("%d",&n);
//  int arr[n];
//  for(int i=0; i<n; i++){
//     scanf("%d",&arr[i]);

// }
// for(int i=0; i<n; i++){
//     printf("%d ",arr[i]);
// }
//  return 0;
// }

//product of an array
#include<stdio.h>

int main() {
    int arr[5] = {2, 7, 3, 9, 4};
    int product = 1;
    for(int i = 0; i < 5; i++) {
        product = product * arr[i];
    }
    printf("The product of the array is %d", product);
    return 0;
}


