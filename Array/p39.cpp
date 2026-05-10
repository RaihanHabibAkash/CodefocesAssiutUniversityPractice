// Problem: Max
// Platform: Codeforces
// Link: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/E
/*

E. Max
time limit per test1 second
memory limit per test256 megabytes
Given a number N, and N numbers, find maximum number in these N numbers.

Input
First line contains a number N (1 ≤ N ≤ 103).

Second line contains N numbers Xi (0 ≤ Xi ≤ 109).

Output
Print the maximum number.

Example
InputCopy
5
1 8 5 7 5
OutputCopy
8
*/

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