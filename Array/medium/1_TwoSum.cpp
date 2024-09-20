#include<bits/stdc++.h>
using namespace std;

string TwoSum(vectro<int> arr, int target){
    int n = arr.size();

    for(int i=0; i<n; i++){
        for(int j= i+1; j<n; j++){
            if(arr[i] + arr[j] == target) return "YES";
        }
    }
    return "NO";
}

//Beeter Apporach 
//Usinh Hashing

//Optimal Apporach
string twoSum(vectr<int> arr, int target){
    sort(arr.begin(), arr.end());
    int left = 0, right = n-1;
    while(left < right){
        int  sum = arr[left] + arr[right];
        if(sum == target){
            return "YES";
        }
        else if(sum < target) left++;
        right--;
    }
    return "NO";
}

int main(){

}