// Problem: GCD
// Platform: Codeforces
// Link: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/L
/*
L. GCD
time limit per test1 second
memory limit per test256 megabytes
Given two numbers A and B. Print the greatest common divisor between (A, B).

Note: The greatest common divisor (GCD) of two or more integers, which are not all zeroes, is the largest positive integer that divides each of the integers.

For example:

the GCD of 8 and 12 is 4.

because the numbers that divides both 8 and 12 are (1,2,4) and 4 is the largest one .

Input
Only one line containing two numbers A and B (1 ≤ A, B ≤ 103).

Output
Print the GCD of A and B.

Examples
InputCopy
12 8
OutputCopy
4
InputCopy
3 7
OutputCopy
1
InputCopy
3 7
OutputCopy
1
InputCopy
5 10
OutputCopy
5
Note
What is the greatest common divisor of 54 and 24?

*The number 54 can be expressed as a product of two integers in several different ways:

54 * 1 = 27 * 2 = 18 * 3 = 9 * 6 .....

Thus the divisors of 54 are: 1,2,3,6,9,18,27,54

Similarly, the divisors of 24 are: 1,2,3,4,6,8,12,24

The numbers that these two lists share in common are the common divisors of 54 and 24:

1,2,3,6

The greatest of these is 6. That is, the greatest common divisor of 54 and 24. One writes:

gcd(54,24) = 6.
*/


#include <bits/stdc++.h>
using namespace std;

int gcd(int max, int min) {
    // Base case
    if(min == 0) return max;

    // Main case
    return gcd(min, max % min);
}

int main() {
    int a,b; cin >> a >> b;
    int minNum = min(a, b),
        maxNum = max(a, b);

    // Printing
    cout << gcd(maxNum, minNum) << endl;

    return 0;
}



// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int a, b; cin >> a >> b;
//     int minNum = min(a, b),
//         maxNum = max(a, b);

//     int gcd = 0;

//     for(int i = 1; i <= minNum; i++) {
//         if(minNum % i == 0 && maxNum % i == 0) gcd = i;
//     }
    
//     cout << gcd << endl;

//     return 0;
// }