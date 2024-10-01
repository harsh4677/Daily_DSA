#include<bits/stdc++.h>
using namespace std;


int LastOccurence(vector<int>& arr, int target){
    int n = arr.size();
    int res = -1;

    for(int i=0; i<n; i++){
        if(arr[i] == target){
            res = i;
        }
    }
    return res;
}

//using Binary search

int solve (vector<int>& arr, int target){
    int n = arr.size();
    int res = -1;
    int start = 0;
    int last = n-1;

    while(start <= last){
        int mid = start + ( last - start)/2;
        if(arr[mid] == target){
            res = mid;
            start = mid + 1;
        }else if(target < arr[mid]){
            last = mid - 1;
        }else{
            start = mid + 1;
        }
    }
    return res;

}
int main() {
  int n = 7;
  int key = 13;
  vector < int > v = {3,4,13,13,13,20,40};
   
  // returning the last occurrence index if the element is present otherwise -1
  cout << solve(v, key) << "\n";

  return 0;
}
