// Problem: Calculator
// Platform: Codeforces
// Link: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/O

/*
O. Calculator
time limit per test1 second
memory limit per test256 megabytes
Given a mathematical expression. The expression will be one of the following expressions: A+B
, A−B
, A∗B
 and A/B
.

Print the result of the mathematical expression.

Input
Only one line contains A,S
 and B
 (1≤A,B≤104)
, S
 is either (+,−,∗,/)
.

Output
Print the result of the mathematical expression.

Examples
InputCopy
7+54
OutputCopy
61
InputCopy
17*10
OutputCopy
170
Note
For the dividing operation you should print the division without any fractions.
*/


#include <bits/stdc++.h>
using namespace std;

int main() {
    // Taking input
    int a, b;
    char s;
    cin >> a >> s >> b;

    if(s == '+') cout << a + b << endl;
    else if(s == '-') cout << a - b << endl;
    else if(s == '*') cout << (long long)a * b << endl;
    else cout << a / b << endl;

    return 0;
}
