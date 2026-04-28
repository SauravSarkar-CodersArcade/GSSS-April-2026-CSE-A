#include<stdio.h>
int main(){
    int arr[] = {3,4,1,2,3,1,2};
    int result = 0;
    // Dynamic Formula for size
    // 7*4 = 28 bytes / int_size(4) = 28/4=7
    int size = sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<size; i++){
        result = result ^ arr[i];
    }
    printf("The non-repeating element is %d\n", 
        result);
}