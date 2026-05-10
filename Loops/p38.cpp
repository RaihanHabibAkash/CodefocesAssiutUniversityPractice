// Problem: Fixed Password
// Platform: Codeforces
// Link: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/D
/*
D. Fixed Password
time limit per test1 second
memory limit per test256 megabytes
Given multiple lines each line contains a number X which is a password. Print "Wrong" if the password is incorrect otherwise, print "Correct" and terminate the program.

Note: The "Correct" password is the number 1999.

Input
The input contains several passwords.

Each line contains a number X (103 ≤ X ≤ 104 - 1).

Output
Print "Wrong" if the password is typed wrong otherwise, print "Correct" if the password is typed correctly.

Example
InputCopy
2200
1020
1999
1000
9999
OutputCopy
Wrong
Wrong
Correct
*/
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    // Taking inpus
    int x;
    while(cin >> x) {
        if(x == 1999) { 
            cout << "Correct" << endl;
            break;
        }
        else cout << "Wrong" << endl;
    }
 
    return 0;
}
