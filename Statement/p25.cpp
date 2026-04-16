// Problem: The last 2 digits
// Platform: Codeforces
// Link: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/Y

/*
Y. The last 2 digits
time limit per test1 second
memory limit per test256 megabytes
Given 4 numbers A
, B
, C
 and D
. Print the last 2 digits from their Multiplication.

Input
Only one line containing four numbers A
, B
, C
 and D
 (2≤A,B,C,D≤109)
.

Output
Print the last 2 digits from their Multiplication.

Examples
InputCopy
5 7 2 4
OutputCopy
80
InputCopy
3 9 9 9
OutputCopy
87
Note
First Example :

the Multiplication of 4 numbers is 5 * 7 * 2 * 4 = 280 so the answer will be the last 2 digits which are 80.

Second Example :

the Multiplication of 4 numbers is 3 * 9 * 9 * 9 = 2187 so the answer will be the last 2 digits which are 87.
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    // Taking input and getting the Multiplication.
    int a, b, c, d; cin >> a >> b >> c >> d;
    long long multiplication = (((long long)a % 100) * (b % 100)) % 100;
    multiplication = (multiplication * (c % 100)) % 100;
    multiplication = (multiplication * (d % 100)) % 100;

    if(multiplication < 10) cout << 0 << multiplication << endl;
    else cout << multiplication << endl;

    return 0;
}