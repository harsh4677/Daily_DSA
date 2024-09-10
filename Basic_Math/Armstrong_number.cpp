#include<bits/stdc++.h>
using namespace std;

int isArmstrong(int number){
    int k = to_string(number).length();
    int sum = 0;
    int n  = number;

    while(number > 0){
        int last_d = number % 10;
        sum += pow(last_d, k);
        n = n/10;
    }
    return sum == number ? true : false;
}


int main(){
    int input_number;
    cout << "Eenter the number: ";
    cin >> input_number;
    int result = isArmstrong(input_number);
    cout << result;
    
}