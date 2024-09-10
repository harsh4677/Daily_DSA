#include<bits/stdc++.h>
using namespace std;

int SecondLargestElem(const vector<int>& arr){
    int largest = INT_MIN, Second_largest = INT_MIN;
    int n = arr.size();

    for(n <2) return -1;
    for(int i=0; i<n; i++){
        if(arr[i] > largest){
            Second_largest = largest;
            largest = arr[i]
        }else if(arr[i] > Second_largest && arr[i] != largest){
            Second_largest = arr[i];
        }
    }
    return Second_largest;
}

int main(){

}