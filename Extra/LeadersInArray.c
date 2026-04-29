#include<stdio.h>
int main(){
    int arr[] = {16, 17, 4, 3, 5, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    // Last element is always a leader
    int max_from_right = arr[n-1]; 
    printf("Leaders in the array: %d ", max_from_right);
    // Traverse from right to left
    for(int i = n-2; i >= 0; i--){
        if(arr[i] > max_from_right){
            max_from_right = arr[i];
            printf("%d ", max_from_right);
        }
    }
    return 0;
}