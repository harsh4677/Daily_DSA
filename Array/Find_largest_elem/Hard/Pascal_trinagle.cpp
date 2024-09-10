#include<bits/stdc++.h>
using namespace std;

// WHAT TO LEARN => HOW TO DERIVE FORMULA 

//1 variation
// give R&C tell the element at that place 
// R=5 and  C=3
// Ans = 6

//2 varaition
// print the any Nth row of the pascal traingle'
// N=5
//  1 4 6 4 1

//3rd variation
// Given N, print the entire traingle 

//1 variation  
// brute force
// Time comp -> O(r)
int nCr(int n, int r){
    long long res = 1;
    for(int i=0; i<r; i++){
        res = res*(n-i);
        res = res / (i+1);
    }
    return res;
}

int main(){

}