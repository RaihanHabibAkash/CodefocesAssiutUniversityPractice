// Problem: Simple Calculator
// Platform: Codeforces
// Link: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/C

/*
C. Simple Calculator
time limit per test1 second
memory limit per test256 megabytes
Given two numbers X and Y. Print the summation and multiplication and subtraction of these 2 numbers.

Input
Only one line containing two separated numbers X, Y (1  ≤  X, Y  ≤  105).

Output
Print 3 lines that contain the following in the same order:

"X + Y = summation result" without quotes.
"X * Y = multiplication result" without quotes.
"X - Y = subtraction result" without quotes.
Example
InputCopy
5 10
OutputCopy
5 + 10 = 15
5 * 10 = 50
5 - 10 = -5
Note
Be careful with spaces.
*/


#include <bits/stdc++.h>
using namespace std;

void printFun(int a, int b) {
    cout << a << " + " << b << " = " << a + b << endl;
    // cout << a << " * " << b << " = " << 1LL * a * b << endl;
    cout << a << " * " << b << " = " <<  (long long)a * b << endl;
    cout << a << " - " << b << " = " << a - b << endl;
}   

int main() {
    // Taking input
    int x, y;
    cin >> x >> y;

    // Callin function for printing
    printFun(x , y);

    return 0;
}
