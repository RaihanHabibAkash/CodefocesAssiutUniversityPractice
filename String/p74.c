// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/E
#include <stdio.h>
#include <string.h>
 
int main() {
    // Taking input
    char lekha[1000000 + 100];
    scanf("%[^\n]s", lekha);
 
    // Checking for length
    int len = strlen(lekha);
 
    int sum = 0;
 
    // Geting the diging and sum of them
    for(int i = 0; i < len; i++) {
        int digit = lekha[i] - '0';
        sum += digit;
    }
 
    // Printing the sum
    printf("%d\n", sum);
 
    return 0;
}