#include<stdio.h>
void countSort(int arr[], int size){
    // Find the max
    int k = arr[0]; // Assumption
    for(int i=1; i<size; i++){
        if(arr[i] > k){
            k = arr[i];
        }
    }
    // Create a count array of 0-max(k)
    int count[k+1];
    // Initialize all values to 0
    for(int i=0; i<k+1; i++){
        count[i] = 0;
    }
    
    // Calculate the frequency of all elements 
    for(int i=0; i<size; i++){
        count[arr[i]]++;
    }
    // Calculate the cumulative frequency
    // current = current + previous
    // Skip the first value at index 0
    // Because there's no previous index -1
    for(int i=1; i<=k; i++){
        count[i] += count[i-1];
    }
    // Create the output array
    int output[size];
    // Start the algo from the end of the array
    for(int i=size-1; i>=0; i--){
        output[--count[arr[i]]] = arr[i];
    }
    // Copy the output back to the input
    for(int i=0; i<size; i++){
        arr[i] = output[i];
    }
}
int main(){
    int arr[] = {1,3,2,3,4,1,6,4,3};
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("Before: ");
    for(int i=0; i<size; i++){
        printf("%d ", arr[i]);
    }
    countSort(arr, size);
    printf("\nAfter: ");
    for(int i=0; i<size; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}