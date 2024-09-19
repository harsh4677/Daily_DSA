#include<bits/stdc++.h>
using namespace std;

int consecutivesOnes(vector<int>  arr){
    int n = arr.size();
    int count = 0, maxcount = 0;

    for(int i=0; i<n; i++){
        if(arr[i] == 1){
            count++;
            maxcount = max(count, maxcount);
        }else{
            count = 0;
        }
    }
    return maxcount;

}

int main() {
  vector < int > nums = { 1, 1, 0, 1, 1, 1 };
  int ans = consecutivesOnes(nums);
  cout << "The maximum  consecutive 1's are " << ans;
  return 0;
}