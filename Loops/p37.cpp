// Problem: Even, Odd, Positive and Negative
// Platform: Codeforces
// Link: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/C
/*
C. Even, Odd, Positive and Negative
time limit per test1 second
memory limit per test256 megabytes
Given N numbers. Count how many of these values are even, odd, positive and negative.

Input
First line contains one number N (1 ≤ N ≤ 103) number of values.

Second line contains N numbers (-105 ≤ Xi ≤ 105).

Output
Print four lines with the following format:

First Line: "Even: X", where X is the number of even numbers in the given input.

Second Line: "Odd: X", where X is the number of odd numbers in the given input.

Third Line: "Positive: X", where X is the number of positive numbers in the given input.

Fourth Line: "Negative: X", where X is the number of negative numbers in the given input.

Example
InputCopy
5
-5 0 -3 -4 12
OutputCopy
Even: 3
Odd: 2
Positive: 1
Negative: 3
Note
First Example :

Even Numbers are : 0, -4 , 12

Odd Numbers are : -5 , -3

Positive Numbers are : 12

Negative Numbers are : -5 , -3 , -4
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    // Var for counting
    int even = 0,
        odd = 0,
        pos = 0,
        neg = 0;

    // Taking input
    int n, x; cin >> n;
    while(cin >> x) {
        // Checking for even & odd
        if(x % 2 == 0) even++;
        else odd++;

        // Checking for pos & neg
        if(x > 0) pos++;
        else if(x < 0) neg++;
    }

    // Printing
    cout << "Even: " << even << endl;
    cout << "Odd: " << odd << endl;
    cout << "Positive: " << pos << endl;
    cout << "Negative: " << neg << endl;

    return 0;
}