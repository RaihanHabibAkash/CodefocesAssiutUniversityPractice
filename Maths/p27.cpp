// Problem: Winter Sale
// Platform: Codeforces
// Link: https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/A
/*
A. Winter Sale
time limit per test1 second
memory limit per test256 megabytes
The winter sale began, and Mrs. Sarah wants to buy a T-shirt for her son. The T-shirt has a ticket that indicates a discount of X%
 and its price P
 after the discount. She now wants to know the price before the discount to know if the discount was worthy. Help her!

Input
Only one line containing two numbers X
 and P
 (1≤X≤99,1≤P≤4×104
) – the discount percentage, and the price of the T-shirt after the discount.

Output
Print the price of the T-shirt before the discount rounded up to two decimal places.

Examples
InputCopy
20 80
OutputCopy
100.00
InputCopy
15 20
OutputCopy
23.53
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    // Taking input
    double discount, amount; cin >> discount >> amount;
    double beforeAmount = amount / ((100.0 - discount) / 100.0);

    // Output
    cout << fixed << setprecision(2) << beforeAmount << endl;
 
    return 0;
}

// Original Price = Final Price / remaing discout