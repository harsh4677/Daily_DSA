#include<bits/stdc++.h>
using namespace std;

int linear_Search(int arr[], int n, int nums){
    for(int i=0; i<n; i++){
        if(arr[i] == nums)
        return i;
    }
    return -1;
}

int main(){
    int arr[]={1,2,3,4,5};
    int num = 4;
    int n = sizeof(arr)/sizeof(arr[0]);
    int val = linear_Search(arr,n,num);
    printf("%d",val);
}