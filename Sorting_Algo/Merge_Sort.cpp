#include<bits/stdc++.h>
using namespace std;

vector<int> MergeSort(vector<int>& arr1, vector<int>& arr2){
    int n = arr1.size(), m = arr2.size();
    vector<int> result;
    int i = 0, j= 0;

    while(i<n && j<m){
        if(arr1[i] > arr[j]){
            result.push_back(arr1[i++]);
        }else{
            result.push_back(arr2[j++]);
        }
    }
    if(i<n){
        result.push_back(arr1[i++]);
    }
    
    if(j<m){
        result.push_back(arr2[j++]);
    }

    return result; 
};
