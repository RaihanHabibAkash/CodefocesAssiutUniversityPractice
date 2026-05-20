// Problem: New Words
// Platform: Codeforces
// Link: https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/U
/*
U. New Words
time limit per test1 second
memory limit per test256 megabytes
Given a string S
. Print number of times that "EGYPT" word can be formed from S
's characters.

Note: Case of the letters doesn't matter. For example: "Egypt", "egypt" and "eGyPt" are the same.

Input
Only one line contains a string S(1≤|S|≤106)
 where |S| is the length of the string and it consists of lowercase and uppercase English letters.

Output
Print the answer required above.

Examples
InputCopy
EgYpTaz
OutputCopy
1
InputCopy
pemigdbeigyypetet
OutputCopy
2
*/
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    // Taking input
    string s;
    cin >> s;
    
    // For counting
    int e = 0;
    int g = 0;
    int y = 0;
    int p = 0;
    int t = 0;
 
    // Checking char
    for(string::iterator it = s.begin(); it < s.end(); it++) {
        if(*it == 'e' || *it == 'E') ++e;
        else if(*it == 'g' || *it == 'G') ++g;
        else if(*it == 'y' || *it == 'Y') ++y;
        else if(*it == 'p' || *it == 'P') ++p;
        else if(*it == 't' || *it == 'T') ++t;
    }
 
    int lowest = min({ e, g, y, p, t });
    
    // Printing
    cout << lowest << endl;
 
    return 0;
}