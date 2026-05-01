#include<stdio.h>
int main(){
    int n = 5;
    int diff[5] = {0};
    int l = 1;
    int r = 3;
    int val = 10;
    // Add the value at starting index [left = l]
    diff[l] += val;
    // We need to balance if extra value gets added
    if((r + 1) < n){
        diff[r+1] -= val; // subtract the value at end
    }
    // Build the array using prefix sum
    int result[5];
    result[0] = diff[0];
    for(int i=1; i<n; i++){
        result[i] = result[i-1] + diff[i];
    }
    for(int i=0; i<n; i++){
        printf("%d ", result[i]); 
    }
    // 0 10 10 10 0
}