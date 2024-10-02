#include<bits/stdc++.h>

int searchElem(vector<int> arr, int target){
    int n = arr.size();

    for(int i=0; i<n; i++){
        if(arr[i] == target){
            return i;
        }
    }
    return -1;
}

int solve(vector<int>arr, int target){
    int n = arr.size();
    int low = 0, high = n-1;

    while(low <=  high){
        int mid = high + (low - high)/2;
        
    }

}
int main(){

}

