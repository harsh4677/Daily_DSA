#include<bists/stdc++.h>
using namespace std;

//Brute force && Better Aporach 
int FindApperance(vector<int> arr){
    int n = arr.size();

    map<int, int> mpp;
    for(int i=0; i<n; i++){
        mpp[arr[i]]++;
    }

    for(auto it: mpp){
        if(it.second == 1){
            return it.first;
        }
    }
    return -1;
}

//optimal Apporach,int>
int getSingleElemnt(vector<int> arr){
    int n = arr.size();

    int xorr = 0;
    for(int i=0; i<n; i++){
        xorr = xorr ^ arr[i];
    }
    return xorr;

}
int main(){

}