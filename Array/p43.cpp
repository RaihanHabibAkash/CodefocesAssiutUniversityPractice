// Problem: Palindrome
// Platform: Codeforces
// Link: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/I

/*
I. Palindrome
time limit per test1 second
memory limit per test256 megabytes
Given a number N
. Print 2 lines that contain the following respectively:

Print N
 in a reversed order and not leading zeroes.
If N
 is a palindrome number print "YES" otherwise, print "NO.
Note:

A palindrome number is a number that reads the same forward or backward.

For example: 12321, 101 are palindrome numbers, while 1201, 221 are not.

A leading zero is any 0 digit that comes before the first nonzero digit in a number for example : numbers (005 , 01 , 0123 , 02 , 000250 ) are leading zeroes but ( 5 , 123 , 20 ,2500 ) not leading zeroes numbers .

Input
Only one line containing a number N
 (1≤N≤107)
.

Output
Print the answer required above.

Examples
InputCopy
12121
OutputCopy
12121
YES
InputCopy
160
OutputCopy
61
NO
*/
#include <bits/stdc++.h>
using namespace std;

bool checkPal(vector<int> &v, int i, int j) {
    // Base case
    if(i == j || i > j) return true;

    // Main case
    return v[i] == v[j] && checkPal(v, i+1, j-1);
}


int main() {
    // Taking input
    int num; cin >> num;

    // Taking vector for placing those value, len int
    vector<int> v; int len = 0;
    while(num != 0) {
        int val = num % 10;
        v.push_back(val);
        num /= 10;
        len++;
    }

    // Printing
    if(v[0] != 0) cout << v[0];
    for(int i = 1; i < len; i++) cout << v[i];
    cout << endl;
    // Checking if palindrome
    cout << (checkPal(v, 0,len-1) ? "YES" : "NO") << endl;

    return 0;
}