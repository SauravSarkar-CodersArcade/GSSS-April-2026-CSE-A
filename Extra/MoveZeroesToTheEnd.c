#include<stdio.h>
int main(){
    int arr[] = {0, 1, 0, 3, 12};
    int n = sizeof(arr) / sizeof(arr[0]);
    int j = 0; // This is for the non-zero elements
    // Move non-zero elements forward
    for(int i=0; i<n; i++){
        if(arr[i] != 0){
            arr[j] = arr[i];
            j++;
        }
    }
    // Fill remaining positions with 0s
    while(j < n){
        arr[j] = 0;
        j++;
    }
    // Print the array
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
}