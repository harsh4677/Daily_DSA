#include<bits/stdc++.h>
using namespace std;

bool isArraySorted(vector<int>& arr1){
    int n = arr1.size();

    for(int i=1; i<n; i++){
        if(arr[i] < arr[i-1]){
            return false;
        }
    }
    return true;
}
int main(){

}