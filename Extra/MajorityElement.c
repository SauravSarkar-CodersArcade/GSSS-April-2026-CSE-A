#include<stdio.h>
int main(){
    int arr[] = {2,2,1,1,2,2,2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int candidate = 0;
    int count = 0;
    // Boyer - Moore's Voting Algorithm
    for(int i=0; i<n; i++){
        if(count == 0){
            candidate = arr[i]; // Start counting
        }
        if(arr[i] == candidate){
            count++; // Same element - Increment count
        }else{
            count--; // Other element - Decrement count
        }
    }
    // A candidate is a majority element only if is has 
    // occurred more than n/2 times in total
    // Verification Step
    int freq = 0;
    for(int i=0; i<n; i++){
        if(arr[i] == candidate){
            freq++;
        }
    }
    // Check if it is actually majority
    if(freq > n / 2){
        printf("Majority Element: %d\n", candidate);
    }else{
        printf("Majority element not found.\n");
    }
}