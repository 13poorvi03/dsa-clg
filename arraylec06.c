//code 1 ---->

#include <stdio.h>
      
//   int Bsearch(int arr[5]){
//     int s=0;
//     int end=4;
//     int t=4;
//     while (s<=end)
//     {
//       int mid=(s+end)/2;
//       if(arr[mid]==t){
//         return mid;
//       }else if(arr[mid]<t){
//         s=mid+1;
//       }else
//       {
//         end=mid-1;
//       }
      
//     }
//     return -1;
    

//   }

// int main(){
//     int arr[5]={1,2,3,4,5};
//    int data=  Bsearch(arr);
//    printf("%d",data);

// }



//code 2---->

// #include <stdio.h>

// void BubbleSort(int arr[], int n) {
//     for (int i = 0; i < n - 1; i++) {
//         for (int j = 0; j < n - 1 - i; j++) {
            
//             if (arr[j] > arr[j + 1]) {
//                 int temp = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = temp;
//             }
//         }
//     }


//     for (int k = 0; k < n; k++) {
//         printf("%d ", arr[k]);
//     }
//     printf("\n"); 
// }

// int main() {
//     int arr[] = {3, 1, 2, 4, 5};
//     int n = sizeof(arr) / sizeof(arr[0]); 
    

//     BubbleSort(arr, n);

//     return 0;
// }




//code 4------->


// #include <stdio.h>
// int sum(int *a,int *b){
//     *a=20;
//     *b=10;
//            int sum=(*a)+(*b);
//     return sum;

// }
// int main(){
//     int a=5;
//     int b=10;
//   int data=    sum(&a,&b);
//   printf("%d",data);
//   printf("%d",a+b);

//     //   int x=5;
//     //   int *a=&x;

//     //   printf("%d",x);
//     //   printf("%d",&x);
//     //   printf("%d",a);
//     //   printf("%d",*a);


// }



//code 5---->

// #include <stdio.h>

// int sum(int *x, int *y) {
//     *x = 50; 
//     *y = 50;
//     int c = (*x) + (*y);
//     return c;
// }

// void swap(int *x, int *y) {
//     int temp = *x;
//     *x = *y;
//     *y = temp;
// }

// int main() {
//     int n = 7; 
//     int is_prime = 1; 
    
//     if (n <= 1) {
//         is_prime = 0;
//     } 
//     else if (n == 2) {
//         is_prime = 1;
//     } 
//     else {
//         for (int i = 2; i * i <= n; i++) {
//             if (n % i == 0) {
//                 is_prime = 0; 
//                 break;
//             }
//         }
//     }
    
//     if (is_prime) {
//         printf("The number %d is prime.\n", n);
//     } else {
//         printf("The number %d is not prime.\n", n);
//     }

//     printf("\n--- Demonstration of Functions ---\n");
//     int a = 10;
//     int b = 20;
//     int s;

//     s = sum(&a, &b);
//     printf("After sum(&a, &b): a = %d, b = %d, sum = %d\n", a, b, s);
    
//     a = 100;
//     b = 200;
//     printf("Before swap: a = %d, b = %d\n", a, b);

//     swap(&a, &b);
//     printf("After swap(&a, &b): a = %d, b = %d\n", a, b);
    
//     return 0;
//}



// code 6------>

#include <stdio.h>
#include <limits.h>

void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    
    int a[5] = {1, -3, 8, 4, -11};
    
    
    int maxsum = INT_MIN; 
    
    
    if (sizeof(a) / sizeof(a[0]) > 0) {
        maxsum = a[0]; 
    }
    
    
    int n = 5; 
    for (int i = 0; i < n; i++) {
        int currentsum = 0;
        for (int j = i; j < n; j++) {
            currentsum = currentsum + a[j];
            if (currentsum > maxsum) {
                maxsum = currentsum;
            }
        }
    }
    printf("Max Subarray Sum: %d\n", maxsum);

    
    int x = 10;
    int y = 20;
    printf("Before swap: x=%d, y=%d\n", x, y);
    swap(&x, &y);
    printf("After swap: x=%d, y=%d\n", x, y);


    int arr[4] = {1, 2, 3, 4};
    int *p = arr;
    
    printf("Element at p+2: %d\n", *(p + 2)); 

    printf("Array elements using pointer: ");
    for (int i = 0; i < 4; i++) {
        printf("%d ", *(p + i));
    }
    printf("\n");
    


    return 0;
}


////////////////////////

//code  7---------->


///incomplete
