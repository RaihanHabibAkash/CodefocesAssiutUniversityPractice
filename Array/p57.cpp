// Problem: Palindrome Array
// Platform: Codeforces
// Link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/G
/*
G. Palindrome Array
time limit per test1 second
memory limit per test256 megabytes
Given a number N
 and an array A
 of N
 numbers. Determine if it's palindrome or not.

Note:

An array is called palindrome if it reads the same backward and forward, for example, arrays { 1 } and { 1,2,3,2,1 } are palindromes, while arrays { 1,12 } and { 4,7,5,4 } are not.

Input
First line contains a number N
 (1≤N≤105)
 number of elements.

Second line contains N
 numbers (1≤Ai≤109)
.

Output
Print "YES" (without quotes) if A is a palindrome array, otherwise, print "NO" (without quotes).

Examples
InputCopy
5
1 3 2 3 1
OutputCopy
YES
InputCopy
4
1 2 3 4
OutputCopy
NO
*/
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    // Taking lenth of the array as input
    int length;
    cin >> length;
 
    int arr[length];
    // Inserting value in the array
    for(int i = 0; i < length; i++) {
        cin >> arr[i];
    }
 
    // Flag of checking
    int flag = 1;
 
    // Cheking if palindrome
    for(int i = 0, j = length - 1; i < j; i++, j--) {
        if(arr[i] != arr[j]) {
            flag = 0;
            break;
        }
    }
 
    // Printing
    if(flag == 1) cout << "YES" << endl;
    else cout << "NO" << endl;
    
    return 0;
}