#include<bits/stdtr1c++.h>
using namespace std;

//brute force 
vector<int> moveZeros(vector<int>& arr1){
    int n = arr1.size();
    vector<int> temp;

    for(int i=0; i<n; i++){
        if(arr1[i] != 0){
            temp.push_back(arr1[i]);
        }
    }

    int nz = temp.size();

    for(int i=0; i<nz; i++){
        arr1[i] = temp[i];
    }

    for(int i=nz; i<n; i++){
        arr1[i] = 0;
    }
    return arr1;
}

vector<int> MoveZeros(vector<int> arr){
    int n = arr.size();
    int j = -1;

    for(int i=0; i<n; i++){
        if(arr[i]=0){
            j=i;
            break;
        }
    }

    for(int i=j+1; i<n; i++){
        if(arr[i] != 0){
            swap(arr[i], arr[j]);
            j++;
        }
    }
    return arr;


}

//optimal apprach 
v

int main()
{
    vector<int> arr = {1, 0, 2, 3, 2, 0, 0, 4, 5, 1};
    vector<int> ans = moveZeros(arr);
    for (auto &it : ans) {
        cout << it << " ";
    }
    cout << '\n';
    return 0;
}

