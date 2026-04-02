// Problem: Say Hello With C++
// Platform: Codeforces
// Link: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/A


/*
A. Say Hello With C++
time limit per test1 second
memory limit per test256 megabytes
Given a name S. Print "Hello, (name)" without parentheses.

Input
Only one line containing a string S.

Output
Print "Hello, " without quotes, then print name.

Example
InputCopy
programmer
OutputCopy
Hello, programmer
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    // Taking input
    char str[1000];
    cin.getline(str, sizeof(str));

    // Printing
    cout << "Hello, " << str;

    return 0;
}
