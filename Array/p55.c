// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/E
#include <stdio.h>
#include <limits.h>
 
int main() {
    int n;
    scanf(" %d", &n);
 
    // Inserting
    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf(" %d", &arr[i]);
    }
 
    // Finding lowest
    int low = INT_MAX;
    int lowIndex = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] < low) {
            low = arr[i];
            lowIndex = i + 1;
        }
    }
 
    printf("%d %d\n", low, lowIndex);
 
    return 0;
}