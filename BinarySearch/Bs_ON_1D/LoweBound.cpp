#include<bits/stdc++.h>
using namespace std;

int lowerBoound(vector<int>& arr, int target){
    int n = arr.size();
    int low = 0,; high = n-1;
    int ans = n;

    while(low <= high){
        int mid = low(low + high)/2;

        if(arr[mid] >= target){
            ans = mid;
            high = mid -1;
        }else{
            low = mid + 1
        }

    }
    return ans;

}



int main(){

}
