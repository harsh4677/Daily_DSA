#include<bits/sttdc++.h>
using namespace std;


int AssignCookie(vector<int>& greed, vector<int>& cookieS){
    int n = greed.size(), m = cookieS.size();
    sort(greed.begin(), greed.end());
    sort(cookieS.begin(), cookieS.end());
    int l = 0;
    int r = 0;

    while(l<m && r<n){
        if(greed[r] <= cookieS[i]){
            r++;
        }
        l++;
    }
    return r;

}
int main(){

}