// Problem: One Prime
// Platform: Codeforces
// Link: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/H
/*
H. One Prime
time limit per test3 seconds
memory limit per test64 megabytes
Given a number X. Determine if the number is prime or not

Note:

A prime number is a number that is greater than 1 and has only two factors which are 1 and itself.

In other words : prime number divisible only by 1 and itself.

Be careful that 1 is not prime .

The first few prime numbers are


Input
Only one line containing a number X (2 ≤ X ≤ 105).

Output
print "YES" if the number is prime and "NO" otherwise.

Examples
InputCopy
7
OutputCopy
YES
InputCopy
15
OutputCopy
NO
Note
First Example :

7 is prime because it is not divisible by 2,3,4,5,6, and only divisible by 1 and itself, so the answer is YES.

Second Example :

15 not is prime because it is divisible by 3 ,5, so the answer is NO.
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    // Taking input
    int num; cin >> num;

    // if num 2,3 prime already
    if(num == 2 || num == 3) {
        cout << "YES" << endl;
        return 0;
    }

    // Checking
    bool flag = true;
    for(int i = 2; i <= sqrt(num); i++) {
        if(num % i == 0) {
            flag = false;
            break;
        }
    }

    // Printing
    cout << (flag ? "YES" : "NO") << endl;

    return 0;
}