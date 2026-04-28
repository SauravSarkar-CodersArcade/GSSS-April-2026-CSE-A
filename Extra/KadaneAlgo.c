#include<stdio.h>
int kadaneAlgo(int arr[], int n){
    int cmax = arr[0];
    int gmax = arr[0];
    for(int i=1; i<n; i++){
        cmax = (arr[i] > cmax + arr[i]) ? arr[i] : cmax + arr[i];
        gmax = (cmax > gmax) ? cmax : gmax;
    }
    return gmax;
}
int main(){
    int arr1[] = {5,-8,1,2,-1,4};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    printf("Max Subarray Sum: %d\n",
    kadaneAlgo(arr1, n1));
    // =========================== //
    int arr2[] = {-5,-8,-1,-2,-1,0};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    printf("Max Subarray Sum: %d\n",
    kadaneAlgo(arr2, n2));
    return 0;
}
