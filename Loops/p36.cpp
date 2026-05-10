// Problem: Even Numbers
// Platform: Codeforces
// Link: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/B

/*
B. Even Numbers
time limit per test1 second
memory limit per test256 megabytes
Given a number N. Print all even numbers between 1 and N inclusive in separate lines.

Input
Only one line containing a number N (1 ≤ N ≤ 103).

Output
Print the answer according to the required above. If there are no even numbers print -1.

Examples
InputCopy
10
OutputCopy
2
4
6
8
10
InputCopy
5
OutputCopy
2
4
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    // Taking input
    int n; cin >> n;
    if(n == 1) cout << -1 << endl;
    else {
        for(int i = 1; i <= n; i++) {
            if(i % 2 == 0) cout << i << endl;
        }
    }

    return 0;
}