// Problem: Reverse Words
// Platform: Codeforces
// Link: https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/Q
/*
Q. Reverse Words
time limit per test1 second
memory limit per test256 megabytes
Given a string S
. For each word in S
 reverse its letters then print it.

Note: words are separated by space.

Input
Only one line contains a strings S
 (1≤|S|≤106)
 where |S| is the length of the string and it consists of lowercase and uppercase English letters, spaces.

Output
Print the answer required above.

Examples
InputCopy
I love you
OutputCopy
I evol uoy
InputCopy
You love me
OutputCopy
uoY evol em
InputCopy
We are a happy family
OutputCopy
eW era a yppah ylimaf
*/
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    // Taking input string
    string s;
    getline(cin, s);
 
    // Declraing string stream class
    stringstream ss(s);
 
    // For getting the words using string stream
    string word;
 
    // Placing 
    ss >> word;
    reverse(word.begin(), word.end());
    cout << word;
    while(ss >> word) {
        reverse(word.begin(), word.end());
        cout << " " << word;
    }
    cout << endl;
 
    return 0;
}