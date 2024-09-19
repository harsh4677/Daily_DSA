#include<bits/stdc++.h>
using namespace std;


//Brute force
int findMissingNumber(vector<int> arr){
    int n = arr.size();

    int sum = (n * (n +1))/2;

    int s2 = 0;
    for(int i=0; i<n; i++){
        s2 += arr[i];
    }

    int missingNum = sum - s2;
    return missingNum;

}
int main(){

}