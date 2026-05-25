// Problem: Pyramid
// Platform: Codeforces
// Link: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/O
/*
O. Pyramid
time limit per test1 second
memory limit per test256 megabytes
Given a number N. Print a left angled triangle that has N rows.

For more clarification see the example below.

Input
Only one line containing a number N (1 ≤ N ≤ 99).

Output
Print the answer according to the required above.

Example
InputCopy
4
OutputCopy
*
**
***
****
Note
Don't print any extra spaces after symbol " * ".
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++) cout << '*';
        cout << endl;
    }

    return 0;
}
