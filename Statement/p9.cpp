// Problem: Welcome for you with Conditions
// Platform: Codeforces
// Link: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/I

/*
I. Welcome for you with Conditions
time limit per test1 second
memory limit per test64 megabytes
Given two numbers A and B. Print "Yes" if A is greater than or equal to B. Otherwise print "No".

Input
Only one line containing two numbers A and B (0  ≤  A, B  ≤  100).

Output
Print "Yes" or "No" according to the statement.

Examples
InputCopy
10 9
OutputCopy
Yes
InputCopy
5 5
OutputCopy
Yes
InputCopy
5 7
OutputCopy
No
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    // Taking input
    int a, b;
    cin >> a >> b;

    // Cheking and printing
    if(a >= b) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}