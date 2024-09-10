#include<bits/stdc++.h>
using namespace std;
//wrong
int missingNumber(int arr[], int n){
    int sum = (n * (n + 1))/2;

    int s2 =0;
    for(int i=0; i<n; i++){
        s2 += arr[i];
    }
    int missing = sum - s2;
    return missing;

}

//optimal
int missingNumber(int arr[], int n){
    int xor1 = 0, xor2 = 0;

    for(int i=0; i< n; i+=){
        xor2 = xor2 ^ arr[i];
        xor1 = xor1 ^ (i+1);
    }
    xor1 = xor1 ^ n;
    return (xor1 ^ xor2);
}

int main(){

}
