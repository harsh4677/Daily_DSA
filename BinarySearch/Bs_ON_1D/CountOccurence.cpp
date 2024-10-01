#include<bits/stdc++.h>
using namespace std;

int First(vector<int>& arr, int target) {
    int n = arr.size();
    int start = 0, end = n - 1;
    int first = -1;

    // Binary search loop
    while (start <= end) {
        int mid = start + (end - start) / 2;
        if (arr[mid] == target) {
            first = mid;
            end = mid - 1; // Look for earlier occurrence on the left side
        } else if (arr[mid] < target) {
            start = mid + 1; // Move to the right half
        } else {
            end = mid - 1; // Move to the left half
        }
    }
    return first;
}

int Last(vector<int>& arr, int target) {
    int n = arr.size();
    int start = 0, end = n - 1;
    int last = -1;

    // Binary search loop
    while (start <= end) {
        int mid = start + (end - start) / 2;
        if (arr[mid] == target) {
            last = mid;
            start = mid + 1; // Look for later occurrence on the right side
        } else if (arr[mid] < target) {
            start = mid + 1; // Move to the right half
        } else {
            end = mid - 1; // Move to the left half
        }
    }
    return last;
}


pair<int, int> firstAndLastPosition(vector<int>& arr, int k) {
    int first = First(arr, k);
    if (first == -1) return { -1, -1};
    int last = Last(arr, k);
    return {first, last};
}

int count(vector<int>& arr, int x) {
    pair<int, int> ans = firstAndLastPosition(arr, x);
    if (ans.first == -1) return 0;
    return (ans.second - ans.first + 1);
}

int main()
{
    vector<int> arr =  {2, 4, 6, 8, 8, 8, 11, 13};
    int n = 8, x = 8;
    int ans = count(arr, x);
    cout << "The number of occurrences is: "
         << ans << "\n";
    return 0;
}
