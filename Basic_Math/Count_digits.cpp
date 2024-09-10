#include<bits/stdc++.h>
using namespace std;

//Brute force Apporach
//Time Complexity : O(log10 N + 1)
int Count_digits(int number){
    int count = 0;
    while(number > 0){
        count += 1;
        number  = number/10;
    }
    return count;
}


//Optimal Apporach
//Time complexity  = O(1)
int Count_Digits(int number ){
    int count = (int)(log10(number)+1);
    return count;

}


//This passes All test cases
int evenlyDivides(int N) {
    
    int counter = 0;
    int original_digit = N;

    while (N > 0) {
        int last_digit = N % 10;

        if (last_digit != 0 && original_digit % last_digit == 0) {
            counter++;
        }

        N = N / 10;
    }
    return counter;
}




int main(){
    int input_number;
    cout << "Enter the number: ";
    cin >> input_number;
    int result1 = Count_digits(input_number);
    int result2 = Count_Digits(input_number);
    int result3 = evenlyDivides(input_number);

    cout << "The result is: " << result1<< "\n";
    cout <<"This  is result of Optimal Apprach: "<< result2 << "\n";
    cout << "This is the result of evenly_divides_number: "<< result3 << "\n";
}
