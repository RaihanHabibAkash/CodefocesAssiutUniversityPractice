// Problem: Even Hate Odd
// Platform: Codeforces
// Link: https://codeforces.com/group/MWSDmqGsZm/contest/329103/problem/G
/*
G. Even Hate Odd
time limit per test5 seconds
memory limit per test256 megabytes
You are given an array a
 of n
 integers. You have two kinds of operations

increment any element in a
 (increase it by one).
decrement any element in a
 (decrease it by one).
What is the minimum number of operations to make the number of even elements equal to the number of odd elements, or detect that this is impossible?

Input
The first line contains a single integer t(1≤t≤10)
 the number of test cases.

The first line of each test case contains an integer n(1≤n≤105)
 the number of elements in the array a
 .

The second line of each test case contains n
 integers ai(1≤ai≤105)
 the elements of the array a
.

Output
For each test case, print the minimum number of operations required, or −1
 if it's impossible

Example
InputCopy
3
4
1 2 3 4
4
1 1 1 1
3
1 2 3
OutputCopy
0
2
-1
*/
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    // Taking cases
    int cs; 
    cin >> cs;
    while(cs--) {
        // Taking Array and len
        int len; 
        cin >> len;
        int arr[len];
        for(int i = 0; i < len; i++) {
            cin >> *(arr + i);
        }
 
        // If len is odd break out of loop after printing -1.
        if(len % 2 != 0) {
            cout << -1 << endl;
            continue;
        }
 
        // Checking even and odds
        int even = 0, odd = 0;
        for(int i = 0; i < len; i++) {
            (*(arr + i) % 2 == 0) ? ++even : ++odd;
        }
 
        // Checking abulute diff and printing
        int dif = len / 2;
        cout << abs(dif - even) << endl;
        
    // While end
    }
 
    return 0;
}
