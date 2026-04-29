#include<stdio.h>
// Solve the given array using recursive
// binary serach to find a certain key
int recursive_bs(int arr[],
int key, int s, int e){
    if(s > e){
        return -1; // Key not found
    }
    int mid = s + (e-s)/2;
    if(arr[mid] == key){
        return mid;
    }else if(arr[mid] < key){
        return recursive_bs(arr, key, mid+1,e);
    }else{
        return recursive_bs(arr, key, s, mid-1);
    }
}
int main(){
    int arr[] = {2,5,8,10,14,19};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("%d\n", recursive_bs(arr,199, 0,n-1));
    return 0;
}