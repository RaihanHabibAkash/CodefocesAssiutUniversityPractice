// Problem: Primes from 1 to n
// Platform: Codeforces
// Link: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/J
/*
J. Primes from 1 to n
time limit per test3 seconds
memory limit per test256 megabytes
Given a number N
. Print all prime numbers between 1 and N
 inclusive.

A prime number is a number that is greater than 1 and has only two factors which are 1 and itself.

In other words : prime number divisible only by 1 and itself.

Be careful that 1 is not prime .

The first few prime numbers are


Input
Only one line containing a number N
 (2≤N≤103)
.

Output
Print all prime numbers between 1 and N
 (inclusive) separated by a space.

Example
InputCopy
10
OutputCopy
2 3 5 7
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int num; cin >> num;
    for(int i = 2; i <= num; i++) {
        bool isPrime = true;
        for(int j = 2; j*j <= i; j++) {
            if(i % j == 0) {
                isPrime = false;
                break;
            } 
        }
        if(isPrime) cout << i << " ";
    }
    cout << endl;
    return 0;
}