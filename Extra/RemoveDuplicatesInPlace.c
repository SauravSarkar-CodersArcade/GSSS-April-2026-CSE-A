#include<stdio.h>
int main(){
    int arr[] = {1,1,2,2,3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int i = 0; // Slow Pointer [Storing Unique Elements]
    // Now the j variable will start from 1 for scanning
    for(int j=1; j<n; j++){
        if(arr[j] != arr[i]){
            i++; // The 0th {1st element is always unique}
            arr[i] = arr[j]; // Placing the unique element
        }
    }
    int new_length = i + 1;
    for(int k=0; k<new_length; k++){
        printf("%d ", arr[k]);
    }
    printf("\nNew Length: %d\n", new_length);
    return 0;
}