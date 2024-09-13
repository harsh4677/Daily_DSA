#include <bits/stdc++.h>
using namespace std;


vector<int> ROotateArray(vector<int>& arr){
    int n = arr.size();

    int temp = arr[0];
    for(int i=0; i<n; i++){
        arr[i] = arr[i+1];
    }
    arr[n-1] = temp;

    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}
