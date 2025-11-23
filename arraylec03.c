// #include <stdio.h>
// #include <limits.h>

// int maxArraySum(int arr[], int n, int k) {
//     int wSum = 0;
//     for(int i = 0; i < k; i++) {
//         wSum = wSum + arr[i];
//     }
//     int maxSum = wSum;
//     for(int j = k; j < n; j++) {
//         wSum = wSum + arr[j] - arr[j - k];
//         if(wSum > maxSum) {
//             maxSum = wSum;
//         }
//     }
//     return maxSum;
// }

// int main() {
//     int arr[] = {2, 1, 5, 1, 3, 2};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     int k = 3;
//     int result = maxArraySum(arr, n, k);
//     printf("Maximum sum of %d consecutive elements is %d\n", k, result);
//     return 0;
// }



//code 2------>
// #include <stdio.h>
// #include <limits.h>

// int maxArraySum(int arr[], int n, int k) {
//     int maxSum = INT_MIN;
//     for(int i = 0; i <= n - k; i++) {
//         int currSum = 0;
//         for(int j = i; j < i + k; j++) {
//             currSum += arr[j];
//         }
//         if(currSum > maxSum) {
//             maxSum = currSum;
//         }
//     }
//     return maxSum;
// }

// int main() {
//     int arr[7] = {-1, 2, 4, 5, -4, 3, -7};
//     int k = 3;
//     int n = sizeof(arr) / sizeof(arr[0]);
//     int data = maxArraySum(arr, n, k);
//     printf("Maximum sum of %d consecutive elements is %d\n", k, data);
//     return 0;
// }





//code 3------>

// #include <stdio.h>

// int main(){
//     int arr[7]={1,2,3,5,6,5,4};
//     int k=3;
//     int n=     sizeof(arr)/sizeof(arr[0]);
//     int windowSum=0;
//     for(int i=0;i<k;i++){
//         //    int arr[7]={1,2,3,5,6,5,4};
//         windowSum=windowSum+arr[i];
//     }
//     int maxSum=windowSum;

//     for(int j=k;j<n;j++){
//         windowSum=windowSum+arr[j]-arr[j-k];
//         if(windowSum>maxSum){
//             maxSum=windowSum;
//         }

//     }
//     printf("%d",maxSum);
//     return 0;

// }


//code 4------>
#include <stdio.h>
int main(){
    int arr[7]={1,2,3,5,6,5,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 3;
    int maxSum=0;

    for(int i=0;i<=n-k;i++){
        int currSum=0;
        for(int j=i;j<i+k;j++){
            currSum=currSum+arr[j];
        }
        if(currSum>maxSum){
            maxSum=currSum;
        }
    }
    printf("Max sum of %d consecutive elements: %d\n", k, maxSum);

    int target=5;
    // Find pairs that sum to target
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i] + arr[j]==target){
                printf("Pair: %d, %d\n", arr[i], arr[j]);
            }
        }
    }
    // Find index of target
    for(int i=0;i<n;i++){
        if(arr[i]==target){
            printf("Index of target %d: %d\n", target, i);
            break;
        }
    }
    return 0;
}