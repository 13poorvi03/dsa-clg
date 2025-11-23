// #include <stdio.h>
// #include <limits.h>

// int main() {
//     int arr[7] = {0, 5, -5, 3, -4, -5, -7}; // Corrected array size and values
//     int n = sizeof(arr) / sizeof(arr[0]);
//     int maxSum = INT_MIN;

//     for (int i = 0; i < n; i++) {
//         int currSum = 0;
//         for (int j = i; j < n; j++) {
//             currSum = currSum + arr[j];
//             if (currSum > maxSum) {
//                 maxSum = currSum;
//             }
//         }
//     }
//     printf("%d", maxSum);
//     return 0;
// }



//code 2------>

// #include<stdio.h>
// int main() {

//     int arr[5] = {1, 2, 3, 2, 2};
//     int isTrue = 1;
//     for(int i = 0; i < 5 / 2; i++) {
//         if(arr[i] != arr[5 - i - 1]) {
//             isTrue = 0;
//             break; // Stop checking if not palindrome
//         }
//     }
//     if(isTrue == 1) {
//         printf("haiii");
//     } else {
//         printf("nhi haiiii\n");

//         int arr2[5] = {10, 20, 30, 40, 50};
//         int first = arr2[0];
//         for(int i = 0; i < 4; i++) { // Only go up to 4 to avoid out-of-bounds
//             arr2[i] = arr2[i + 1];
//         }
//         arr2[4] = first;

//         for(int k = 0; k < 5; k++) {
//             printf("%d ", arr2[k]);
//         }
//     }
//     return 0;
// }

//code 3------>

// #include <stdio.h>
// #include<limits.h>
    
//    int    BSearch(){
//       int arr[6]={1,2,3,4,5,6};
//     int target=11;
//     int s=0;
//     int end=5;
//     while(s<=end)
//     {
//         int mid=(s+end)/2;
//         if(arr[mid]==target){
//             return mid;
//             // printf("%d",mid);
//         }
//         else if(arr[mid]<target){
//             s=mid+1;

//         }else
//         {   end=mid-1;
           
//         }
        

//     }
//     return -1;
    


//    }

//    void p(int *a){
//     *a=100;
//     printf("%d",*a);

//    }
// int main(){
//     int a=5;


//     p(&a);
//     printf("%d",a);
//     int *b=&a;
//     printf("%d",&a);

//   int data=    BSearch();
//   printf("%d",data);
// // }

//code 3----->


// #include<stdio.h>
// #include<limits.h>
// int main(){
//         int arr[5]={-1,-2,-3,-4,-5};
//     int maxsum=INT_MIN,currsum=0;
//     for(int i=0;i<5;i++)
//     {
            
//             currsum=currsum+arr[i];
//             if(maxsum<currsum)
//             {
//                 maxsum=currsum;
//             }
//             if(currsum<0)
//             {
//                 currsum=0;
//             }
            

//     }
//     printf("Max = %d",maxsum);

// }


