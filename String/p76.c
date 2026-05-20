// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/G
#include <stdio.h>
 
int main() {
    // Taking input
    char str[1000000];
    scanf("%s", str);
 
    // Traversing till last
    int index = 0;
    while(str[index] != '\0') {
 
        if(str[index] == ',') {
            str[index] = ' ';
        // A - Z aski
        } else if(str[index] >= 'A' && str[index] <= 'Z') {
            str[index] = str[index] + 32;
        // a - z aski
        } else if(str[index] >= 'a' && str[index] <= 'z') {
            str[index] = str[index] - 32;
        }
 
        // For while loop
        index++;
    }
 
    // Printing 
    printf("%s", str);
    return 0;
}