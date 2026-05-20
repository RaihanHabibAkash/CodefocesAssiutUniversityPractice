// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/B
#include <stdio.h>
 
int main() {
    int n;
    scanf(" %d", &n);
 
    // Ineserting array value
    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf(" %d", &arr[i]);
    }
 
    // The number to found
    int x;
    scanf(" %d", &x);
    int search = -1;
 
    // Searching 
    for(int i = 0; i < n; i++) {
        if(arr[i] == x) {
            search = i;
            break;
        }
    }
 
    printf("%d", search);
 
    return 0;
}