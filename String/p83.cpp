// Problem: Replace Word
// Platform: Codeforces
// Link: https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/V
/*
V. Replace Word
time limit per test1 second
memory limit per test256 megabytes
Given a string S
. Print S
 after replacing every sub-string that is equal to "EGYPT" with space.

Input
Only one line contains a string S
 (1≤|S|≤103)
 where |S| is the length of the string and it consists of only uppercase English letters.

Output
Print the result as required above.

Examples
InputCopy
BRITISHEGYPTGHANA
OutputCopy
BRITISH GHANA
InputCopy
ITALYKOREAEGYPTEGYPTALGERIAEGYPTZ
OutputCopy
ITALYKOREA  ALGERIA Z


*/
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    string st;
    cin >> st;
 
    while(st.find("EGYPT") != string::npos) {
        int index = st.find("EGYPT");
        st.replace(index, 5, " ");
    }
 
    // Output
    cout << st << endl;
 
    return 0;
}