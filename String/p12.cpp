// Problem: The Brothers
// Platform: Codeforces
// Link: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/L

/*
L. The Brothers
time limit per test1 second
memory limit per test256 megabytes
Given two person names.

Each person has {"the first name" + "the second name"}

Determine whether they are brothers or not.

Note: The two persons are brothers if they share the same second name.

Input
First line will contain two Strings F1, S1 which donates the first and second name of the 1st person.

Second line will contain two Strings F2, S2 which donates the first and second name of the 2nd person.

Output
Print "ARE Brothers" if they are brothers otherwise print "NOT".

Examples
InputCopy
bassam ramadan
ahmed ramadan
OutputCopy
ARE Brothers
InputCopy
ali salah
ayman salah
OutputCopy
ARE Brothers
InputCopy
ali kamel
ali salah
OutputCopy
NOT
*/

#include <bits/stdc++.h>
using namespace std;

int secName(char str1[]) {
    int a;
    for(int i = 0; str1[i] != '\0'; i++) {
        if(str1[i] == ' ') {
            a = i + 1;
            break;
        }
    }

    return a + 1;
}

int main() {
    char str1[1000], str2[1000];

    // Taking input 1
    cin.getline(str1, sizeof(str1));
    // Taking input 2
    cin.getline(str2, sizeof(str2));

    // Getting 2nd name index
    int index1 = secName(str1);
    int index2 = secName(str2);

    // Flag for cheking
    int flag = 1; 

    // Checking for name
    for(int i = index1, j = index2; str1[i] != '\0'; i++, j++) {
        if(str1[i] != str2[j]) {
            flag = 0;
            break;
        }
    }

    // Printing
    if(flag == 1) cout << "ARE Brothers" << endl;
    else cout << "NOT" << endl;

    return 0;
}