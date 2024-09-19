#include<bits/stdc++.h>
using namespace std;

vector<int> RemoveDuplicates(vector<int>& arr1){
    int n = arr1.size();

    int i;
    for(int j =0; j<n; j++){
        if(arr[i] != arr[j]){
            i++;
            arr[i] = arr[j];
        }
    }
}

int main(){

}
