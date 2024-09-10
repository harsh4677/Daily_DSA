#include<bits/stdc++.h>
using namespace std;

int Second_largest(int arr[], int n){
    int largest = arr[0];
    int Slargest = -1;

    for(int i=0; i< n; i++){
        if(largest < arr[i]){
            largest = arr[i];
        }
    }

    for(int i=0; i<n ; i++){
        if(arr[i] > Slargest && arr[i]!= largest){
            Slargest = arr[i];
        }

    }
    return Slargest;
} 

//Optimised version
int SecondLargest(int arr[], int n){
    int largest  = arr[0];
    int Slargest = -1;

    for(int i=0; i<n; i++){
        if(arr[i] > largest){
            Slargest = largest;
            largest = arr[i];
        }
        else if(arr[i] > Slargest && arr[i]!= largest){
            Slargest = arr[i];
        }
    }
    return Slargest;
}

int main(){
    int arr[] ={ 1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int sL = Second_largest(arr, n);
    cout << "Second largest "<< sL << "\n";
}

