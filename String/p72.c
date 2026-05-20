// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/C
#include <stdio.h>
#include <string.h>
 
int main() {
    char x[30], y[30];
    scanf("%s %[^\n]s", x, y);
 
    int xLen = strlen(x);
    int yLen = strlen(y);
    
    // x > y Length wise
    if(xLen > yLen) {
        for(int i = 0; y[i] != '\0'; i++) {
            if(x[i] < y[i]) {
                // x < y
                printf("%s\n", x);
                return 0;
            } else if(x[i] > y[i]) {
                // x > y
                printf("%s\n", y);
                return 0;
            }
        }
 
        // x == y till now, now length is fact so y < x
        printf("%s\n", y);
    
    // x < y Length wise
    } else if (xLen < yLen) {
        for(int i = 0; x[i] != '\0'; i++) {
            if(x[i] < y[i]) {
                // x < y
                printf("%s\n", x);
                return 0;
            } else if(x[i] > y[i]) {
                // x > y
                printf("%s\n", y);
                return 0;
            }
        }
 
        // x == y till now, now length is fact so x < y
        printf("%s\n", x);
 
    } else {
        for(int i = 0; x[i] != '\0'; i++) {
            if(x[i] < y[i]) {
                // x < y
                printf("%s\n", x);
                return 0;
            } else if(x[i] > y[i]) {
                // x > y
                printf("%s\n", y);
                return 0;
            }
        }
 
        // x == y till now, now length is fact so x == y
        printf("%s", x);
    }
 
    return 0;
}