// Problem: I Love strings
// Platform: Codeforces
// Link: https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/K
/*
K. I Love strings
time limit per test2 seconds
memory limit per test64 megabytes
Given two strings S and T. Print a new string that contains the following:

The first letter of the string S followed by the first letter of the string T.
the second letter of the string S followed by the second letter of the string T.
and so on...
In other words, the new string should be ( S0 + T0 + S1 + T1 + .... ).
Note: If the length of S is greater than the length of T then you have to add the rest of S letters at the end of the new string and vice versa.

Input
The first line contains a number N (1 ≤ N ≤ 50) the number of test cases.

Each of the N following lines contains two string S, T (1 ≤ |S|, |T| ≤ 50) consists of lower and upper English letters.

Output
For each test case, print the required string.

Example
InputCopy
2
ipAsu ccsit
ey gpt
OutputCopy
icpcAssiut
egypt
*/
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    // Taking cs
    int cs;
    cin >> cs;
 
    while(cs--) {
        // Taking string input
        string s1 , s2, s;
        cin >> s1 >> s2;
 
        // Loop while one string empty
        while(s1.size() != 0 && s2.size() != 0) {
            char word = s1[0];
            s1.erase(0, 1);
            s.push_back(word);
 
            word = s2[0];
            s2.erase(0, 1);
            s.push_back(word);
 
        // While end inner
        }
        
        // Bigger string is still there, concat in s
        if(s1.size() != 0) s += s1;
        else s += s2;
 
        // Printing
        cout << s << endl;
 
    // while ends Outer for cs
    }
    return 0;
}