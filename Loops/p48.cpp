// Problem: Sequence of Numbers and Sum
// Platform: Codeforces
// Link: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/R
/*
R. Sequence of Numbers and Sum
time limit per test1 second
memory limit per test256 megabytes
Given multiple lines each line contains two numbers N and M.

For each line print a single line contains:

The numbers between N and M inclusive separated by single space.
The message " sum =".
The summation of all numbers between N and M inclusive.
Note: The program should be TERMINATED as soon as any of these two numbers is less than or equal to zero and don't print any thing.

For more clarification see the examples below.

Input
The input contains multiple line.

Each line contains two numbers N and M (-100 ≤ N, M ≤ 100).

It's guaranteed that the last line of the input will contain a number that is less than or equal to zero.

Output
For each line print the answer according to the required above in a single line.

Examples
InputCopy
5 2
5 7
5 -1
OutputCopy
2 3 4 5 sum =14
5 6 7 sum =18
InputCopy
5 2
6 3
5 0
OutputCopy
2 3 4 5 sum =14
3 4 5 6 sum =18
Note
M may be greater than N and Vice Versa.
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    while(true) {
        int a, b; cin >> a >> b;
        if(a < 1 || b < 1) break;
        int minNum = min(a,b);
        int maxNum = max(a,b);

        int sum = 0;
        for(int i = minNum; i <= maxNum; i++){
            sum += i;
            cout << i << " ";
        } 

        cout << "sum =" << sum << endl;
    }

    return 0;
}