//

#include<stdio.h>
int main(){
    int arr[5]={23,12,52,34,5};
      int target = 3;     
    for(int i=1;i<5;i++)
    {
        if(arr[i]==target){

        
        printf("%d", arr[i]);
        break;

    }    
    
    }
    return 0;
}