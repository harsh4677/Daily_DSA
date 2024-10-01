#include<bits/stdc++.h>
using namespace std;


int binarySearch(vector<int>& arr, int target){
    int n = arr.size();

    int low = 0, high = n-1;

    while(low<= high){
        int mid = low(low + high)/2;
        if(arr[mid] == target) return mid;
        else if(target> mid) low = mid + 1;
        else high = mid - 1;
    }
    return -1;
}
int main(){

}