// Problem: Two intervals
// Platform: Codeforces
// Link: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/X

/*
X. Two intervals
time limit per test1 second
memory limit per test256 megabytes
Given the boundaries of 2 intervals. Print the boundaries of their intersection.

Note: Boundaries mean the two ends of an interval which are the starting number and the ending number.

Input
Only one line contains two intervals [l1,r1]
, [l2,r2]
 where (1≤l1,l2,r1,r2≤109)
, (l1≤r1,l2≤r2)
.

It's guaranteed that l1≤r1
 and l2≤r2
.

Output
If there is an intersection between these 2 intervals print its boundaries , otherwise print -1.

Examples
InputCopy
1 15 5 27
OutputCopy
5 15
InputCopy
2 5 6 12
OutputCopy
-1
Note
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    // Taking input
    int l1, r1, l2, r2; cin >> l1 >> r1 >> l2 >> r2;
    int left, right;

    // If no intervals found out of the function after printing -1.
    if(r1 < l2 || r2 < l1) {
        cout << -1 << endl;
        return 0;
    } 

    // Checking left
    if(l1 > l2) left = l1;
    else if(l2 > l1) left = l2;
    else left = l1;

    // Checking right
    if(r1 < r2) right = r1;
    else if(r1 > r2) right = r2;
    else right = r2;
    
    // Printing
    cout << left << " " << right << endl;
    
    return 0;
}