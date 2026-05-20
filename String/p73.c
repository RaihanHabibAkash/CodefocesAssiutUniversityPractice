#include <stdio.h>
 
int main() {
    char a[15], b[15], c[30];
    scanf("%s %[^\n]s", a, b);
 
    // lenth1
    int len1 = 0;
    while(a[len1] != '\0') {
        len1++;
    }
 
    // lenth1
    int len2 = 0;
    while(b[len2] != '\0') {
        len2++;
    }
 
    // printing length
    printf("%d %d\n", len1, len2);
 
    // First lenth
    int k = 0; 
    for(int i = 0; i < len1; i++, k++) {
        c[k] = a[i];
    }
 
    // Second length
    for(int i = 0; i < len2; i++, k++) {
        c[k] = b[i];
    }
 
    // Setting null at the end
    c[k] = '\0';
 
    // Printing concat string c
    printf("%s\n", c);
 
    // Swaping first char of the two string
    char temp = a[0];
    a[0] = b[0];
    b[0] = temp;
 
    // Printing both string
    printf("%s %s", a, b);
    
    return 0;
}