// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/B
#include <stdio.h>
#include <string.h>
 
int main() {
    // Taking input
    char lekha[1000000 + 100];
    scanf("%[^\n]s", lekha);
 
    // Gettin lenght of the lekha
    int len = strlen(lekha);
 
    // Cheking
    for(int i = 0; i < len; i++) {
        if(lekha[i] == '\\') {
            lekha[i] = '\0';
            break;
        }
    }
 
    // Printing new lekha
    printf("%s", lekha);
 
    return 0;
}