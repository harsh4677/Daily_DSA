#include<bits/stdc++.h>
using namespace std;

//Printing 1 To N
void Print1ToN(int num){

    if(num == 1){
        cout << N <<" ";
        return;
    }

    Print1ToN(num -1);
    cout << num << " ";

}

//printing N to 1 

void PrintNTo1(int num){
    if(num == 1){
        cout << num << " ";
        return;
    }
    cout << num << " ";
    PrintNTo1(num - 1);
}

vector<long long> factorialNumber(long long num){
    vector<long long> result
}
int main(){

}

