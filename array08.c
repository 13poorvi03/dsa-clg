#include <stdio.h>
int main(){
     int a=100;
    int arr[5]={1};
    int max=arr[0];
    for(int i=0;i<4;i++){
        if(arr[i]>max){
            max=arr[i];
        }
       
    }
    printf("%d",max);
    printf("%d",arr[45]);
     for(int i=2;i>=0;i--){
        printf("%d",arr[i]);
     }

}

