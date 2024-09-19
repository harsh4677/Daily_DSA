#include<bits/stdc++.h>
using namespace std;



vector<int> FindingUnion(vector<int> arr1, vector<int> arr2){
    int n = arr1.size();
    int m = arr2.size();

    set<int> result;

    for(int i=0; i<n; i++){
        result.push_back(arr[i]);
    }

    for(int i=0; i<m; i++){
        result.push_back(arr[]);
    }
    return result;

}

//Optimal solution
vetcor<int> findingUnion(vector<int> arr1, vector<int> arr2){
    int n = arr1.size(), m = arr2.size();
    int i = 0;
    int j = 0;
    vetcor<int> union;

    while(i<n && j<m){
        if(arr1[i] <= arr2[j]){
            if( union.size() == 0 ||  arr1[i].back() != arr1[i]){
                union.push_back(arr1[i]);
            }
        }
        else{
            if( union.size() == 0 ||  arr2[i].back() != arr2[i]){
            union.push_back(arr2[i]);
            }
        }
    }

    while(i<n){
        if( union.size() == 0 ||  arr1[i].back() != arr1[i]){
            union.push_back(arr1[i]);
        }
    }

    while(j<m){
        if( union.size() == 0 ||  arr2[j].back() != arr2[j]){
            union.push_back(arr2[j]);
        }
    }

}

int main(){

}