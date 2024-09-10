#include<bits/stdc++.h>
using namespace std;


//left rotate By one place 
void solve(int arr[], int n){
    int temp = arr[0];
    for(int i=0; i< n; i++){
        arr[i] = arr[i+1];
    }
    arr[n-1] = temp;
    for(int i=0; i<n; i++){
        cout<< arr[i] << " ";
    }
}

//right Rotate by one placce 
void right_rotate(int arr[], int n){
    int temp = arr[n-1];
    for(int i = n-1; i>0; i--){
        arr[i] = arr[i-1];
    }
    arr[0] = temp;

    for(int i=0; i<n; i++){
        cout<< arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    right_rotate(arr, n);
    return 0;
}


