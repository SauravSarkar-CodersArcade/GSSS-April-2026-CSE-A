#include<stdio.h>
int firstOcc(int arr[], int n, int key){
    int s = 0;
    int e = n-1;
    int ans = -1;
    while(s <= e){
        int mid = s + (e-s)/2;
        if(arr[mid] == key){
            // Store ans & move to ext left for 1st occ
            ans = mid;
            e = mid -1;
        }
        else if(arr[mid] < key){
            s = mid + 1;
        }else{
            e = mid -1;
        }
    }
    return ans;
}
int lastOcc(int arr[], int n, int key){
    int s = 0;
    int e = n-1;
    int ans = -1;
    while(s <= e){
        int mid = s + (e-s)/2;
        if(arr[mid] == key){
            // Store ans & move to ext right for last occ
            ans = mid;
            s = mid + 1;
        }
        else if(arr[mid] < key){
            s = mid + 1;
        }else{
            e = mid -1;
        }
    }
    return ans;
}
int totalOcc(int arr[], int n, int key){
    int fo = firstOcc(arr, n, key);
    int lo = lastOcc(arr, n, key);
    int total = lo - fo + 1;
    return total;
}
int main(){
    int arr[] = {1,2,3,3,3,3,4,5};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("First: %d\n", firstOcc(arr, n, 3));
    printf("Last: %d\n", lastOcc(arr, n, 3));
    printf("Total: %d\n", totalOcc(arr, n, 3));
}