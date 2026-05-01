#include<stdio.h>
/*Prerequisite for this question:
1. Sorted array
2. 1 based elements 
3. No duplicates
4. Exactly one missing number
5. Numbers already in sequence*/
int missingElement(int arr[], int n){
    int s = 0;
    int e = n - 1;
    while(s <= e){
        int mid = s + (e-s)/2;
        if(arr[mid] != mid + 1){
            // Go to the left side
            // Also perform the checks 
            if(mid == 0 || arr[mid-1] == mid){
                return mid + 1;
            }
            e = mid - 1;
        }else if(arr[mid] == mid + 1){
            // Go to the right hand side
            s = mid + 1;
        }
    }
    return n + 1; // Return the next element
}
int main(){
    int arr1[] = {1,2,3,5,6,7};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int arr2[] = {1,2,3,4,5,6};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    printf("%d\n", missingElement(arr1, n1));
    printf("%d\n", missingElement(arr2, n2));
    return 0;
}