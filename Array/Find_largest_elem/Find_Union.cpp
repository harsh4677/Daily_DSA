#include<bits/stdc++.h>
using namespace std;
//union of two soted array
vector <int> FindUnion(int arr1[], int arr2[], int n, int m){
    set<int> s;
    vector<int> Union;

    for(int i=0; i<n; i++){
        s.insert(arr1[i]);
    }
    for(int j=0; j<m; j++){
        s.insert(arr2[j]);
    }
    for(auto & it:s){
        Union.push_back(it);
    }
    return Union;
}

vector<int> Find_Union(int arr1[], int arr2[], int n, int m){
    int i=0 , j=0;
    vector<int> Union;

    while(i<n && j<m){
        if(arr1[i] = arr2[j]){
            if(Union.size() == 0 || Union.back() != arr1[i]){
                Union.push_back(arr1[i]);
                i++;
            }

        }
    }

}

int main(){

}