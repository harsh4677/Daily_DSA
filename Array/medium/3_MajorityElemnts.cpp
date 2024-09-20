#include<bits/stdc++.h>
using namespace std;

int MajorityElem(vetor<int> arr){
    int n = arr.size();

    for(int i=0; i<n; i++){
        int count = 0;
        for(int j=0; j<n; j++){
            if(arr[i] == arr[j]){
                count++;
            }
        }

        if(count > (n/2)){
            return arr[i];
        }
    }
    return -1;

}

//Better apporach
int majorityelm(vector<int> arr){
    int n = arr.size();
    map<int, int> mpp;

    for(int i=0; i<n; i++){
        mpp[arr[i]]++;
    }

    for(auto it: mpp){
        if(it.second > (n/2)){
            return it.first;
        }
    }
int main(){

}
