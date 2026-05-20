// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/J
#include <stdio.h>
 
int main() {
    int n;
    scanf("%d", &n);
    
    int arr[n];
 
    // Inserting value in array
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
 
    // Var for min
    int min = arr[0];
 
    for(int i = 0; i < n; i++) {
        // Check min
        if(arr[i] < min) {
            min = arr[i];
        }
    }
 
    // Var for freq
    int count = 0;
 
    // Count for freq of min
    for(int i = 0; i < n; i++) {
        if(arr[i] == min) {
            ++count;
        }
    }
 
    // check the freq is even or odd
    if(count % 2 == 0) {
        printf("Unlucky\n");
    } else {
        printf("Lucky\n");
    }
 
    return 0;
}