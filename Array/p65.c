// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/W
#include <stdio.h>
 
int main() {
    // Taking input
    int n, m;
    scanf("%d %d", &n, &m);
 
    // Taking 2D Array input
    int arr[n][m];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            scanf("%d", &arr[i][j]);
        }
    } 
 
    // Inverting
    for(int i = 0; i < n; i++) {
        for(int j = 0, k = m - 1; j < k; j++, k--) {
            int temp = arr[i][j];
            arr[i][j] = arr[i][k];
            arr[i][k] = temp;
        }
    }
 
 
    // Printing 2D array
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
 
    return 0;
}