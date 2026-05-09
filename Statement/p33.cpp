// Problem: Lucky Numbers
// Platform: Codeforces
// Link: https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/I

/*
I. Lucky Numbers
time limit per test1 second
memory limit per test256 megabytes
A number of two digits is lucky if one of its digits is divisible by the other.

For example, 39, 82, and 55 are lucky, while 79 and 43 are not.

Given a number between 10 and 99, determine whether it is lucky or not.

Input
Only one line containing a single number N
 (10≤N≤99)
.

Output
Print "YES" if the given number is lucky, otherwise print "NO".

Examples
InputCopy
39
OutputCopy
YES
InputCopy
64
OutputCopy
NO
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    // Taking input
    int num; cin >> num;

    // Getting the 2number
    int one = num % 10;
    num /= 10;
    int two = num % 10;

    // Printing
    if(one == 0 || two == 0) cout << "YES" << endl;
    else if(one % two == 0 || two % one == 0) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}