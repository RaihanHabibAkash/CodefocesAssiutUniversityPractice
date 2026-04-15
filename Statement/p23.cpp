// Problem: Mathematical Expression
// Platform: Codeforces
// Link: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/W

/*
W. Mathematical Expression
time limit per test0.25 seconds
memory limit per test256 MB
Given a mathematical expression. The expression will be one of the following expressions:

A + B = C, A - B = C and A * B = C

where A, B, C are three numbers, S is the sign between A and B, and Q the '=' sign

Print "Yes" If the expression is Right , Otherwise print the right answer of the expression.

Input
Only one line containing the expression: A, S, B, Q, C respectively (0 ≤ A, B ≤ 100,  - 105 ≤ C ≤ 105) and S can be ('+', '-', '*') without the quotation.

Output
Output either "Yes" (without the quotation) or the right answer depending on the statement.

Examples
InputCopy
5 + 10 = 15
OutputCopy
Yes
InputCopy
3 - 1 = 2
OutputCopy
Yes
InputCopy
2 * 10 = 19
OutputCopy
20
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    // Taking input
    int a, b, c; char s, y;
    cin >> a >> s >> b >> y >> c;

    // Checking and printing
    if(s == '+') {
        // a + b
        if(a + b == c) cout << "Yes" << endl;
        else cout << a + b << endl;
    } else if(s == '-') {
        // a - b
        if(a - b == c) cout << "Yes" << endl;
        else cout << a - b << endl;
    } else {
        // a * b
        if(a * b == c) cout << "Yes" << endl;
        else cout << a * b << endl;
    }

    return 0;
}