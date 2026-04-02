// Problem: Basic Data Types
// Platform: Codeforces
// Link: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/B

/*
B. Basic Data Types
time limit per test1 second
memory limit per test256 megabytes
The following lines show some C++ data types, their format specifiers and their most common bit widths:

int : 32 Bit integer.
long long : 64 bit integer
Char : 8 bit Characters & symbols
Float : 32 bit real value
Double : 64 bit real value
Reading

To read a data type, use the following syntax:

   cin >> VariableName;
 
For example, to read a character followed by a double:

  char ch;
  double d;
  cin >> ch >> d;
 
Printing
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int number;
    long long bigNumber;
    char c;
    float flo;
    double bigFlo;

    // Taking input
    cin >> number >> bigNumber >> c >> flo >> bigFlo;

    // Ouput Priting
    cout << number << endl << bigNumber << endl << c << endl << flo << endl << bigFlo << endl;

    return 0;
}