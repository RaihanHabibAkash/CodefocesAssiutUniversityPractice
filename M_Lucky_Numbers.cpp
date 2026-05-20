/*
M. Lucky Numbers
time limit per test1 second
memory limit per test256 megabytes
Given two numbers A
 and B
. Print all lucky numbers between A
 and B
 inclusive.

Note:

The Lucky number is any positive number that its decimal representation contains only 4 and 7.

For example: numbers 4, 7, 47 and 744 are lucky and numbers 5, 17 and 174 are not.

Input
Only one line containing two numbers A
 and B
 (1≤A≤B≤105)
.

Output
Print all lucky numbers between A
 and B
 inclusive separated by a space. If there is no lucky number print -1.

Examples
InputCopy
4 20
OutputCopy
4 7 
InputCopy
8 15
OutputCopy
-1
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b; cin >> a >> b;
    bool lucky = false;

    for(int i = a; i <= b; i++) {
        int num = i;
        bool isLucky = true;
        // Lucky checker
        while(num != 0) {
            if(num % 10 != 4 && num % 10 != 7) {
                isLucky = false;
                break;
            }
            num /= 10;
        }

        // Printing if lucky num
        if(isLucky == true) {
            cout << i << " ";
            lucky = true;
        }
    }

    // Printing if no lucky
    if(!lucky) cout << -1;

    // New line
    cout << endl;

    return 0;
}