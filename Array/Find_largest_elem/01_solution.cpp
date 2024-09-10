#include <bits/stdc++.h>
using namespace std;

//using sorting 
//O(N*log(N))
int Find_largestElem(vector<int>&arr){
    sort(arr.begin(), arr.end());
    return arr[arr.size()-1 ];
}


int findLargestElemnnt(vector<int>&arr, int n){
    int max = arr[0];
    for(int i=0; i<n; i++){
        if(max < arr[i]){
            max = arr[i];
        }
    }
    return max;
}