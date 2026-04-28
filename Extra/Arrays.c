#include<stdio.h>
// An array itself is a pointer - Array Pointers
int main(){
    int arr[] = {22,19,20,34,54,21};
    int size = sizeof(arr) / sizeof(arr[0]);
    // Print the name of the array
    // Address of the first element in the array
    // printf("%p\n", arr);
    for(int i=0; i<size; i++){
        printf("%d ", *(arr)+i);
    }
    
    return 0;
}