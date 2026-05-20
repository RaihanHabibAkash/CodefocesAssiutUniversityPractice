// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/M
#include <stdio.h>
 
int main() {
    char hlw[] = "hello";
 
    // Taking input
    char string[10005];
    scanf("%[^\n]s", string);
 
    // Var for checking
    int sub = 1;
 
    int k = 0;
    for(int i = 0; hlw[i] != '\0'; i++) {
        for(int j = k; string[j] != '\0'; j++) {
            if(hlw[i] == string[j]) {
                k = j + 1;
                sub = 1;
                break;
            }
            sub = 0;
        }
 
        // After loop is sub == 0 mean not found so break out of first loop
        if(sub == 0) {
            break;
        // String value is't complete yet
        } else if(i < 4) {
            sub = 0;
        }
    }
 
    if(sub == 0) {
        printf("NO\n");
    } else {
        printf("YES\n");
    }
 
    return 0; 
}
