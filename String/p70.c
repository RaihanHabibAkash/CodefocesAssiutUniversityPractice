// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/A
#include <stdio.h>
#include <string.h>
 
int main() {
    // Taking input
    char lekha1[1010],
         lekha2[1010];
    fgets(lekha1, sizeof(lekha1), stdin);
    scanf("%[^\n]s", lekha2);
 
    // The length of the string
    int len1 = strlen(lekha1);
    len1--;
    int len2 = strlen(lekha2);
 
    // New String
    char lekha[len1 + len2 + 10];
 
 
    int k = 0;
    // Inserting 2nd string
    for(int i = 0; i < len1; i++) {
        lekha[k++] = lekha1[i];
    }
 
    // Space after 1st string
    lekha[k++] = ' ';
 
    // Inserting 2nd string
    for(int i = 0; i < len2; i++) {
        lekha[k++] = lekha2[i];
    }
 
    // Placing null pointer
    lekha[k++] = '\0';
 
    // Printing
    printf("%d %d\n", len1, len2);
    printf("%s\n", lekha);
 
    return 0;
}
