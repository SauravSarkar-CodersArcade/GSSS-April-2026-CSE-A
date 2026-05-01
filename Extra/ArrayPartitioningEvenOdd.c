#include<stdio.h>

int main(){
    int arr[] = {3,8,5,12,7,6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int left = 0;
    int right = n - 1;
    while(left < right){
        while(arr[left] % 2 == 0){
            left++; // Even no - skip and move forward
        }
        while(arr[right] %2 != 0){
            right--; // Odd no - skip & move backwards
        }
        if(left < right){
            // The numbers don't match the requirement 
            // Swap & send to correct side
            int temp = arr[left];
            arr[left] = arr[right];
            arr[right] = temp;
        }
    }
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
}