// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/I
#include <stdio.h>
 
int main() {
    // Input
    char str[1000];
    scanf("%[^\n]s", str);
 
    // Checking length
    int index = 0;
    while(str[index] != '\0') {
        // For while loop
        ++index;
    }
 
    // Checking palindrome
    int isPalindrome = 1;
    for(int i = 0, j = index - 1; i <= j; i++, j--) {
        if(str[i] != str[j]) {
            isPalindrome = 0;
            break;
        }
    }
 
    // Printing
    if(isPalindrome == 1) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
 
    
    return 0;
}