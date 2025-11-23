// #include<stdio.h>
// int palindrome(int arr[i],int i,int j)
// {
//     if(i>=j){
//         return 1;
//     }
//     if(arr[i]!=arr[j]){
//         return 0;
//     }
//     return palindrome(arr,++i,--j);
// }


#include <stdio.h>


int binary_search(int arr[], int l, int r, int x)
{
    if (l > r) return -1;
    int m = l + (r - l) / 2;
    if (arr[m] == x) return m;
    if (x < arr[m]) return binary_search(arr, l, m - 1, x);
    return binary_search(arr, m + 1, r, x);
}

int main(void)
{
    int a[] = {1, 2, 3, 4, 5, 6, 8, 10};
    int n = sizeof(a) / sizeof(a[0]);

    int targets[] = {4, 7};
    for (int t = 0; t < 2; t++) {
        int x = targets[t];
        int idx = binary_search(a, 0, n - 1, x);
        if (idx >= 0) printf("%d found at index %d\n", x, idx);
        else printf("%d not found\n", x);
    }

    return 0;
}
