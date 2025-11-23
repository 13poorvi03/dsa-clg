//find the maximum value out of all the elements in the array.


// #include<stdio.h>
// int main(){
//     int arr[7]={2,34,22,4,3,1,9};
//     int max =-1;
//     for(int i=0; i<=6;i++){
//         if(max<arr[i]){
//             max=arr[i];

//         }

//     }
//             printf("%d",max);
//         return 0;
    
// }




// #include<stdio.h>
// int main(){
//     int arr[7]={-2,-34,-22,-4,-3,-1,-9};
//     int max =arr[0];
//     for(int i=0; i<=6;i++){
//         if(max<arr[i]){
//             max=arr[i];

//         }

//     }
//             printf("%d",max);
//         return 0;
    
// }




//find minimum value of array

#include<stdio.h>
int main(){
    int arr[7]={72,34,22,4,3,10,9};
    int min =arr[0];
    for(int i=0; i<=6;i++){
        if(min>arr[i]){
            min=arr[i];

        }

    }
            printf("%d",min);
        return 0;
    
}
