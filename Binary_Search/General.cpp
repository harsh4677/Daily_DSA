#include<bits/stdc++.h>
using namespace std;

int iterative_code(vector<int>& arr, int n, int target){
    int low =0, high = n-1;

    while(low <= high){
        // int mid = (low + high)/2; Can cause OverFlow
        int mid = low + (high - low)/2;

        if(arr[mid] == target) return mid;
        else if(target > arr[mid]) low = mid + 1;
        else high = mid - 1;
    }
    return -1;
}

int Recursion_code(vector<int>& nums, int low, int high, int target) {
    // Base case
    if (low > high) return -1;

    int mid = low + (high - low) / 2; // Correct calculation of mid
    if (nums[mid] == target) return mid;
    else if (nums[mid] < target) return Recursion_code(nums, mid + 1, high, target);
    else return Recursion_code(nums, low, mid - 1, target);
}


int main(){
    vector<int> arr = {1,2,3,4,5,6,7};
    int n = arr.size();
    int result = iterative_code(arr, n, 5);
    cout << result << "\n";
    return 0;
}