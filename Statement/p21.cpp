// Problem: Float or int
// Platform: Codeforces
// Link: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/U

/*
U. Float or int
time limit per test1 second
memory limit per test256 megabytes
Given a number N
. Determine whether N
 is float number or integer number.

Note:

If N
 is float number then print "float" followed by the integer part followed by decimal part separated by space.
If N
 is integer number then print "int" followed by the integer part separated by space.
For more clarification see the examples below.

Input
Only one line containing a number N
 (1≤N≤103)

Output
Print the answer required above.

Examples
InputCopy
234.000
OutputCopy
int 234
InputCopy
534.958
OutputCopy
float 534 0.958
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    // Taking input
    double number; cin >> number;

    // Checking for int of double
    int num = number;
    if(number - num != 0) cout << "float " << num << " " << number - num << endl;
    else cout << "int " << num << endl;

    return 0;
}