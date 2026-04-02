// Problem: Two numbers
// Platform: Codeforces
// Link: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/H

/*
H. Two numbers
time limit per test1 second
memory limit per test256 megabytes
Given 2 numbers A
 and B
. Print floor, ceil and round of A/B

Note:

Floor: Is a mathematical function that takes a real number X
 and its output is the greatest integer less than or equal to X
.
Ceil: Is a mathematical function that takes a real number X
 and its output is the smallest integer larger than or equal to X
.
Round: Is a mathematical function that takes a real number X
 and its output is the closest integer to that number X
.

For more clarification visit the links in the notes below.

Input
Only one line containing two numbers A
 and B
 (1≤A,B≤103)

Output
Print 3 lines that contain the following in the same order:

"floor A
 / B
 = Floor result" without quotes.
"ceil A
 / B
 = Ceil result" without quotes.
"round A
 / B
 = Round result" without quotes.
Examples
InputCopy
10 3
OutputCopy
floor 10 / 3 = 3
ceil 10 / 3 = 4
round 10 / 3 = 3
InputCopy
10 4
OutputCopy
floor 10 / 4 = 2
ceil 10 / 4 = 3
round 10 / 4 = 3
InputCopy
10 6
OutputCopy
floor 10 / 6 = 1
ceil 10 / 6 = 2
round 10 / 6 = 2
Note
Links:

For Rounding method visit: https://www.mathsisfun.com/numbers/rounding-methods.html.
For Flooring and Ceiling method visit: https://www.mathsisfun.com/sets/function-floor-ceiling.html.
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    // Taking input
    int a, b;
    cin >> a >> b;

    // Printing
    cout << "floor " << a << " / " << b << " = " << floor((double)a / b) << endl;
    cout << "ceil " << a << " / " << b << " = " << ceil((double)a / b) << endl;
    cout << "round " << a << " / " << b << " = " << round((double)a / b) << endl;

    return 0;
}
