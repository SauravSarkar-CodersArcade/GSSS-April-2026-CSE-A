#include<stdio.h>
void sort012(int arr[], int n){
    int c0 = 0, c1 = 0, c2 = 0;
    for(int i=0; i<n; i++){ // O(n)
        if(arr[i] == 0) c0++;
        else if(arr[i] == 1) c1++;
        else c2++;
    }
    int index = 0;
    while(c0 > 0){
        arr[index++] = 0;
        c0--;
    }
    while(c1 > 0){
        arr[index++] = 1;
        c1--;
    }
    while(c2 > 0){
        arr[index++] = 2;
        c2--;
    }
}
int main(){
    int arr[] = {1,2,0,1,2,1,0};
    int n = sizeof(arr) / sizeof(arr[0]);
    sort012(arr, n);
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
}