// Problem: Difference
// Platform: Codeforces
// Link: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/D

/*
D. Difference
time limit per test1 second
memory limit per test256 megabytes
Given four numbers A, B, C and D. Print the result of the following equation :

 X = (A * B) - (C * D).

Input
Only one line containing 4 separated numbers A, B, C and D ( - 105  ≤  A, B, C, D  ≤  105).

Output
Print "Difference  =  " without quotes followed by the equation result.

Examples
InputCopy
1 2 3 4
OutputCopy
Difference = -10
InputCopy
2 3 4 5
OutputCopy
Difference = -14
InputCopy
4 5 2 3
OutputCopy
Difference = 14
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    // Taking input
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    // Printing output
    // cout << "Difference = " << (1LL * a * b) - (1LL * c * d) << endl;
    cout << "Difference = " << ((long long)a * b) - ((long long)c * d) << endl;

    return 0;
}