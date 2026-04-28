#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);

    int arr[n];
    int total = 0;
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
        total += arr[i];
    }
    int left = 0;
    for(int i=0; i<n; i++){
        int right = total - left - arr[i]; 
        if(left == right){
            printf("Pivot index: %d\n", i);
            return 0;
        }
        left += arr[i];
    }
    printf("No PIVOT index found\n");
}
