#include<bits/stdc++.h>
using namespace std;

vector<int> findDivisor(int n){
    vector<int> divisors;
    int sqrtN = sqrt(n);

    for (int i=0; i<= sqrtN; i++){
        if(n % i == 0){
            divisors.push_back(i);
            if(i != n/i){
                divisors.push_back(n/i);
            }
        }
    }
    return divisors;
}


int main(){
    int input_number;
    cout << "Enter the number: ";
    cin>> input_number;
    


}