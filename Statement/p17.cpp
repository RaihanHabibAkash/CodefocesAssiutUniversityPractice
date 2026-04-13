// Problem: Coordinates of a Point
// Platform: Codeforces
// Link: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/Q

/*
Q. Coordinates of a Point
time limit per test1 second
memory limit per test256 megabytes
Given two numbers X, Y which donate coordinates of a point in 2D plan. Determine in which quarter does it belong.

Note:

Print Q1, Q2, Q3, Q4 according to the quarter in which the point belongs to.
Print "Origem" If the point is at the origin.
Print "Eixo X" If the point is over X axis.
Print "Eixo Y" if the point is over Y axis.

Input
Only one line containing two numbers X, Y ( - 1000 ≤ X, Y ≤ 1000).

Output
Print the answer to problem above.

Examples
InputCopy
4.5 -2.2
OutputCopy
Q4
InputCopy
0.1 0.1
OutputCopy
Q1
*/


#include <bits/stdc++.h>
using namespace std;
int main() {
    // Takig input
    double x, y; 
    cin >> x >> y;

    // Printing
    if(x == 0 && y == 0) cout << "Origem" << endl;
    else if(y == 0) cout << "Eixo X" << endl;
    else if(x == 0) cout << "Eixo Y" << endl;
    else if(x > 0 && y > 0) cout << "Q1" << endl;
    else if(x < 0 && y < 0) cout << "Q3" << endl; 
    else if(x > 0 && y < 0) cout << "Q4" << endl;
    else cout << "Q2" << endl;

    return 0;
}