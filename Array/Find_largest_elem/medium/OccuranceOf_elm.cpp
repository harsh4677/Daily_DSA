#include<bits/stdc++.h>
using namespace std;

//Brute force approach 
//Navie approach
int Occurance_elm(vector<int> v){
    int n = v.size();

    for(int i=0; i<n; i++){
        int count = 0;
        for(int j=0; j<n; j++){
            if(v[j] == v[i]){
                count++;
            }
        }

        if(count > (n/2)){
            return v[i];
        }
    }
    return -1;
}

//beter apprachh 
//using Map
int majorityElm(vector<int> v){
    int n = v.size();

    map<int, int> mpp;

    for(int i=0; i<n; i++){
        mpp[v[i]]++;
    }

    for(auto it: mpp){
        if(it.second > (n/2)){
            return it.first;
        }
    }
    return -1;
}

//Moores voting algo
int majority_elm(vector<int> v){
    int n = v.size();
    int count =0;
    int elm;

    for(int i=0; i<n; i++){
        if(count == 0){
            count = 1;
            elm = v[i];
        }
        else if(elm == v[i]) count++;
        else count--;
    }

//check if the stored element
//is the majority element
    int count_1 = 0;
    for(int i=0; i<n; i++){
        if(v[i] == elm)count_1++;
    }

    if(count_1 > (n/2)) return elm;
    return -1;
}

int main(){

}
