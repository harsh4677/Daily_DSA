#include<bits/stdc++.h>
using namespace std;

int SecondLargestElemnt(vector<int>& arr1){
    int n = arr1.size();
    int large, SecondLargest = INT_MIN;
    int i;

    if(n<2){
        return -1;
    }

    for(int i=0; i<n; i++){
        if(arr1[i] > large){
            SecondLargest = large;
            large = arr1[i];
        }
        else if(arr[i] > SecondLargest && arr[i] != large){
            SecondLargest = arr1[i];
        }
        
        return SecondLargest;
    }




}

int  main(){

}

