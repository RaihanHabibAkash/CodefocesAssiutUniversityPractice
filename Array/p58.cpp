// Problem: Sorting
// Platform: Codeforces
// Link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/H
/*
H. Sorting
time limit per test1 second
memory limit per test64 megabytes
Given a number N and an array A of N numbers. Print the numbers after sorting them.

Note:

Don't use built-in-functions.
try to solve it with bubble sort algorithm or Selection Sort.
for more information watch : https://www.youtube.com/watch?v=EnodMqJuQEo.
Input
First line contains a number N (0 < N < 103) number of elements.

Second line contains N numbers ( - 100 ≤ Ai ≤ 100).

Output
Print the numbers after sorting them.

Examples
InputCopy
3
3 1 2
OutputCopy
1 2 3 
InputCopy
4
5 2 7 3
OutputCopy
2 3 5 7 
*/
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    // Taking length of the arr as input
    int len;
    cin >> len;
 
    int arr[len];
    // Inserting value in arr
    for(int i = 0; i < len; i++) {
        cin >> arr[i];
    }
 
    // Sorting using build in method
    sort(arr, arr + len);
 
    // Printing array
    for(int i = 0; i < len; i++) {
        cout << arr[i] << " ";
    }
 
    return 0;
}
