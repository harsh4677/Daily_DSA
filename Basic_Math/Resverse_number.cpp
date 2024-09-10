#include<bits/stdc++.h>
using namespace std;

//Optimal Apporach
int reverse_number(int number ){
    int rev_num = 0;
    while(number>0){
        int last_d = number % 10;
        rev_num = (rev_num * 10) + last_d;
        number = number / 10;
    }
    return rev_num;
    
}


long long reverse(int x) {
    long long reversed = 0;

    while (x != 0) {
        int last_digit = x % 10;

        // Check for overflow before updating reversed
        if (reversed > (INT_MAX / 10) || (reversed == INT_MAX / 10 && last_digit > INT_MAX % 10)) {
            return 0;
        }
        if (reversed < (INT_MIN / 10) || (reversed == INT_MIN / 10 && last_digit < INT_MIN % 10)) {
            return 0;
        }

        reversed = reversed * 10 + last_digit;
        x = x / 10;
    }
    return reversed;
}



int main(){
    int input_number;
    cout << "Enter the number: ";
    cin >> input_number;
    int result = reverse_number(input_number);
    cout << "The result is : "<< result <<"\n";

    return 0;
}