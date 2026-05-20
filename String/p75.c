// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/F
#include <stdio.h>
 
int main() {
    // // Number of strings
    int numbers;
    scanf(" %d", &numbers);
 
    //     // Taking inputs
    while(numbers > 0) {
        // Var of string
        char str[1000000];
 
        // Taking inputs
        scanf("%s", str);
 
        // Traversing to the string
        int index = 0;
        while(str[index] != '\0') {
            index++;
        }
 
        // Length is less than or equl to 10 print it
        if(index <= 10) {
            printf("%s\n", str);
        } else {
            // spectial way
            char firstChar = str[0];
            char lastChar = str[index - 1];
            int betWeenFirstToLast = index - 2;
 
            // Print it
            printf("%c%d%c\n", firstChar, betWeenFirstToLast, lastChar);
        }
 
        --numbers;
    }
    
    return 0;
}