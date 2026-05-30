// Problem: Shape2
// Platform: Codeforces
// Link: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/T
/*
T. Shape2
time limit per test1 second
memory limit per test256 megabytes
Given a number N. Print a pyramid that has N rows.

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
  ***
 *****
*******
Note
Don't print any extra spaces after symbol " * ".
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    // Taking inputs
    int n; cin >> n;

    // Printig each time
    for(int i = 1, k = 1; i <= n; i++, k+=2) {
        // Printing space
        for(int j = i; j < n; j++) cout << " ";
        // Printing *
        for(int j = 1; j <= k; j++) cout << '*';
        cout << endl;
    }

    return 0;
}