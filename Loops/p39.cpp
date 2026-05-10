
#include <bits/stdc++.h>
using namespace std;
 
int findMax(int n) {
    // Declaration of dynamic array
    int *arr = new int[n];
    
    // Taking input
    for(int i = 0; i < n; i++) cin >> arr[i];
 
    // Finding max
    int mx = INT_MIN;
    for(int i = 0; i < n; i++) mx = max(arr[i], mx);
 
    // Deleting dynamic array
    delete[] arr;
 
    // Returning max
    return mx;
}
 
int main() {
    // Takin lenth as input
    int len;
    cin >> len;
 
    // Funciton for max
    int mx = findMax(len);
 
    // Printing max
    cout << mx << endl;
 
    return 0;
}