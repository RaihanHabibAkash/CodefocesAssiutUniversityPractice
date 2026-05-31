// Problem: Easy Fibonacci
// Platform: Codeforces
// Link: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/Y
/*
Y. Easy Fibonacci
time limit per test1 second
memory limit per test256 megabytes
Given a number N. Print first N numbers of the Fibonacci sequence.

Note: In order to create the Fibonacci sequence use the following function:

fib(1) = 0.
fib(2) = 1.
fib(n) = fib(n - 1) + fib(n - 2).
Input
Only one line containing a number N (1 ≤ N ≤ 45).

Output
Print the first N numbers from the Fibonacci Sequence .

Example
InputCopy
7
OutputCopy
0 1 1 2 3 5 8 
Note
For more information visit Fibonacci: https://www.mathsisfun.com/numbers/fibonacci-sequence.html.
*/

#include <bits/stdc++.h>
using namespace std;

void fib(int i, int j, int n) {
    // Base case
    if(n == 0) return;

    // Printing
    cout << i << " ";

    // Main case
    fib(j, i+j, n-1);
}

int main() {
    int n; cin >> n;

    fib(0, 1, n);

    return 0;
}