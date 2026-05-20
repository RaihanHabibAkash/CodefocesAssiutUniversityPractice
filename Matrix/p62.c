// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/S
#include <stdio.h>
 
int main() {
    // Taking input for 2D array length cols * rows
    int cols, rows;
    scanf(" %d %d", &cols, &rows);
 
    int arr[cols][rows];
 
    // Taking value for 2D array
    for(int i = 0; i < cols; i++) {
        for(int j = 0; j < rows; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
 
    // Taking the value for match
    int x;
    scanf("%d", &x);
 
    // Flag for output
    int flag = 0;
 
    // Matching if the value is in the 2D array
 
    // 1st loop start
    for(int i = 0; i < cols; i++) {
        // 2nd loop starts
        for(int j = 0; j < rows; j++) {
            /* Checking if the val is int the array, If so
            flag = true || 0 and break out of the 2nd loop */
            if(arr[i][j] == x) {
                flag = 1;
                break;
            // Conditon ends
            }
        // 2nd loop ends 
        }
        
        // If the flag is false || 0, break out of the 1st loop
        if(flag == 1) {
            break;
        // Condtion ends
        }
    
    // 1st loop ends
    }
 
 
    // Output
    if(flag == 1) {
        printf("will not take number\n");
    } else {
        printf("will take number\n");
    }
 
    return 0;
}
