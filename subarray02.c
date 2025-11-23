#include<stdio.h>
int main(){
    int arr[5]={2,-3,4,5,6};
    int maxSum=0;
    int curSum =0;
    for(int i=0;i<5; i++){
        curSum+=arr[i];
        if(curSum>maxSum){
            maxSum=curSum;
        }
        if(maxSum>curSum){
            curSum=maxSum;
        }
    }
    printf("maximum subaray sum is :\n",maxSum);
    return 0;
}