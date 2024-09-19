#include<bits/stdc++.h>
using namespace std;

int LinerSearch(vector<int> arr, int target){
    int n = arr.size();

    for(int i=0; i<n; i++){
        if(target == arr[i]){
            return i;
        }
    }
    return -1;
}

int main(){

}