#include<bits/stdc++.h>
using namespace std;

//Brute force or Better solution
void sortArray(vector<int>& arr, int n){
    int count_0 = 0, count_1 = 0, count_2 = 0;

    for(int i=0; i<n; i++){
        if(arr[i] == 0){
            count_0++;
        }else if(arr[i] == 1){
            count_1++;
        }else{
            count_2++;
        }
    }
    for(int i=0; i<count_0; i++) arr[i] = 0;
    for(int i=count_0; i<count_0 + count_1; i++) arr[i] = 1;
    for(int i=count_0 + count_1; i<n; i++) arr[i] = 2;

}

//Optimal 
//Dutch National Flag algorithm
void Sort_Array(vector<int>& arr, int n){
    int low = 0, mid = 0, high = n-1;

    while(mid <= high){
        if(arr[mid]== 0){
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        }else if(arr[mid] == 1){
            mid++;
        }else{
            swap(arr[mid], arr[high]);
            high--;
        }
    }
}

int main(){

    int n = 6;
    vector<int> arr = {0, 2, 1, 2, 0, 1};
    Sort_Array(arr, n);
    cout << "After sorting:" << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;

}