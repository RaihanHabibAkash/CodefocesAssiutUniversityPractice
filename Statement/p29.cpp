// Problem: Next Alphabet
// Platform: Codeforces
// Link: https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/C
/*
C. Next Alphabet
time limit per test1 second
memory limit per test256 megabytes
Given a lowercase alphabet character. You have to print the next character in the alphabet.

Input
Only one line containing a lowercase English letter C
.

Output
Print the next letter to C
 in the alphabet.

Example
InputCopy
a
OutputCopy
b
Note
The next letter to z is a.
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    // Taking input
    char alphabet; cin >> alphabet;

    // Getting output
    if(alphabet == 'z') cout << 'a' << endl;
    else cout << (char)(alphabet + 1) << endl;

    return 0;
}