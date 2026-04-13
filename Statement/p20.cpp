// Problem: Sort Numbers
// Platform: Codeforces
// Link: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/T

/*
T. Sort Numbers
time limit per test0.25 seconds
memory limit per test256 megabytes
Given three numbers A, B, C. Print these numbers in ascending order followed by a blank line and then the values in the sequence as they were read.

Input
Only one line containing three numbers A, B, C ( - 106  ≤  A, B, C  ≤  106)

Output
Print the values in ascending order followed by a blank line and then the values in the sequence as they were read.

Examples
InputCopy
3 -2 1
OutputCopy
-2
1
3

3
-2
1
InputCopy
-2 10 0
OutputCopy
-2
0
10

-2
10
0
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    // Taking input
    int a, b, c; cin >> a >> b >> c;

    // For Checking
    int mn, mid, mx;

    // Checking min, max
    mn = min({ a, b, c });
    mx = max({ a, b, c });
    mid = (a + b + c) - (mn + mx);

    // Printing
    cout << mn << endl;
    cout << mid << endl;
    cout << mx << endl;
    cout << endl;
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;

    return 0;
}