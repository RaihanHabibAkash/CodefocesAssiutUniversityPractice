// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/M
#include <stdio.h>
 
int main() {
    int n;
    scanf(" %d", &n);
    int arr[n];
 
    int minIndex = 0;
    int maxIndex = 0;
 
    // Inserting and checking for min and max
    for(int i = 0; i < n; i++) {
        scanf(" %d", &arr[i]);
 
        // for min
        if(arr[i] < arr[minIndex]) {
            minIndex = i;
        }
        // for max
        if(arr[i] > arr[maxIndex]) {
            maxIndex = i;
        }
    }
 
    // Swaping
    int temp = arr[minIndex];
    arr[minIndex] = arr[maxIndex];
    arr[maxIndex] = temp;
 
    // Printing loop
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
 
 
    return 0;
}