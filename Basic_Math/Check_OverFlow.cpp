#include <bits/stdc++.h>
using namespace std;

bool willOverflowOnMultiplication(int current, int multiplier, int addend) {
    
    // Check for positive overflow
    if (current > (INT_MAX / multiplier) || 
        (current == INT_MAX / multiplier && addend > INT_MAX % multiplier)) {
        return true;
    }
    
    // Check for negative overflow
    if (current < (INT_MIN / multiplier) || 
        (current == INT_MIN / multiplier && addend < INT_MIN % multiplier)) {
        return true;
    }
    return false;
}

int main() {
    int current = 214748364;
    int multiplier = 10;
    int addend = 8;

    if (willOverflowOnMultiplication(current, multiplier, addend)) {
        cout << "Overflow will occur" << endl;
    } else {
        cout << "No overflow" << endl;
    }

    return 0;
}
