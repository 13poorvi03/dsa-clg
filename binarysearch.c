int BSearch(){
    int arr[6]={4,5,6,7,8};
    int target = 7;
    int s =0;
    int end = 5;
    while(s<=end){
        int mid =(s+end)/2;
            if(arr[mid]== target){
                return mid;

            }
            else if(arr[mid]<target){
                s=mid+1;
            }
            else{
                end=mid-1;
            }

    }
}
return -1;