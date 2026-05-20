#include <stdio.h>
#include <math.h>
 
int main() {
    // Taking input
    int n;
    scanf(" %d", &n);
 
    // Taking 2D array inputs
    int arr[n][n];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            scanf(" %d", &arr[i][j]);
        }
    }
 
    // Sum var
    int mainDiagonal_sum = 0,
        secDiagonal_sum = 0;
 
    // Checking value and sum of the both diagonals
    
    // First loop starts
    for(int i = 0; i < n; i++) {
        // Second loop starts
        for(int j = 0; j < n; j++) {
            // Checking main diagonal, and sum
            if(i == j) {
                mainDiagonal_sum += arr[i][j];
            }
 
            // Checking for secendery diagonal, and sum
            if(i + j == n - 1) {
                secDiagonal_sum += arr[i][j];
            }
 
 
        // Second loop ends 
        }
    // First loop ends
    }
 
    // Absolute sum using method
    // int dif = abs(mainDiagonal_sum - secDiagonal_sum);
 
 
    // Absoulute sum without method
    int dif = mainDiagonal_sum - secDiagonal_sum;
    if(dif < 0) {
        dif *= -1;
    }
 
    // Priting the dif
    printf("%d\n", dif);
 
    return 0;
}
