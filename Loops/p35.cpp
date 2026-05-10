// Problem: 1 to N
// Platform: Codeforces
// Link: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/A

/*
A. 1 to N
time limit per test1 second
memory limit per test256 megabytes
Given a number N. Print numbers from 1 to N in separate lines.

Input
Only one line containing a number N (1 ≤ N ≤ 103).

Output
Print N lines according to the required above.

Example
InputCopy
5
OutputCopy
1
2
3
4
5
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    // Taking input
    int n; cin >> n;
    // Printing 1-Times
    for(int i = 1; i <= n; i++) cout << i << endl;

    return 0;
}