#include<bits/stdc++.h>
using namespace std;

bool Check_plaindrome(int number ){
    int rev_num =0;
    int dup = number;

    while(number > 0){
        int last_d = number % 10;
        rev_num = (rev_num * 10) + last_d;
        number = number / 10;
    }
    if (rev_num == dup){
        return true;
    }else{
        return  false;
    }

}


bool isPalindrome(int x) {

    if (x < 0 || (x % 10 == 0 && x != 0)) {
        return false;
    }

    int reversed = 0;
    int original = x;
    
    while (x > reversed) {
        int last_digit = x % 10;
        reversed = reversed * 10 + last_digit;
        x = x / 10;
    }
    return x == reversed || x == reversed / 10;
}


int main(){
    int input_number;
    cout << "Enter the Number: ";
    cin >> input_number;
    int result = Check_plaindrome(input_number);
    cout<<"The result is: "<< result << "\n";
}