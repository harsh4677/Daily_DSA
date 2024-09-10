#include <bits/stdc++.h>
using namespace std;

int lowerBound(vector<long long>& arr, long long n, long long x) {
    int low = 0, high = n - 1;
    int ans = n;
    while (low <= high) {
        int mid = low + (high - low) / 2;

        // maybe an answer
        if (arr[mid] >= x) {
            ans = mid;
            // look for more small index on left
            high = mid - 1;
        } else {
            low = mid + 1; // look for right
        }
    }
    return ans;
}

int findFloor(vector<long long> v, long long n, long long x) {
    int lb = lowerBound(v, n, x);
    // Check if lower bound index is 0 and the element is greater than x
    if (lb == 0 && v[lb] > x) {
        return -1; // No floor found
    }
    if (lb == n || v[lb] != x) {
        lb--; // Move to the actual floor element
    }
    return lb;
}

int main() {
    vector<long long> v = {1, 2, 4, 6, 10};
    long long n = v.size();
    long long x = 5;
    int floorIndex = findFloor(v, n, x);
    if (floorIndex != -1) {
        cout << "Floor of " << x << " is " << v[floorIndex] << endl;
    } else {
        cout << "No floor found for " << x << endl;
    }
    return 0;
}
