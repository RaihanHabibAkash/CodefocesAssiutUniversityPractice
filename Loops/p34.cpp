// Problem: Katryoshka
// Platform: Codeforces
// Link: https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/G

/*
G. Katryoshka
time limit per test1 second
memory limit per test256 megabytes
The Egyptian football team will be in Russia for the World Cup. Of course, they all would like to buy souvenirs for their families. Luckily, they met the king of souvenirs Matryoshka who is famous for his masterpiece Katryoshka. He makes it using different wooden pieces: eyes, mouths and bodies. He can form a nice Katryoshka using one of the following combinations:

Two eyes and one body.
Two eyes, one mouth, and one body.
One eye, one mouth, and one body.
If the king has n
 eyes, m
 mouths and k
 bodies, what is the largest number of Katryoshkas he can make?
Input
Only one line containing three numbers n
, m
 and k
 (0≤n,m,k≤1018
) – the number of eyes, mouths and bodies respectively.

Output
Print the largest number of Katryoshkas he can make.

Examples
InputCopy
1 2 3
OutputCopy
1
InputCopy
0 11 2
OutputCopy
0
InputCopy
90 24 89
OutputCopy
57
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    long long eyes, mouths, bodies; cin >> eyes >> mouths >> bodies;
    
    long long cnt = 0;
    while(bodies != 0 && eyes != 0) {
        if(mouths != 0) {
            long long lowest = min({bodies, mouths, eyes});
            mouths -= lowest;
            bodies -= lowest;
            eyes -= lowest;
            cnt += lowest;
        }
        else if(eyes >= 2*bodies){
            cnt += bodies;
            eyes -= 2*bodies;
            bodies -= bodies;
        }
        else {
            cnt += eyes/2;
            bodies -= eyes/2;
            eyes -= eyes;
        }
    }

    cout << cnt << endl;

    return 0;
}