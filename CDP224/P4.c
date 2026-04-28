#include<stdio.h>

int main(){
    int n;
    printf("Enter size: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements:\n");
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    int sum = 0;
    int min_sum = 0;
    for(int i=0; i<n; i++){
        sum += arr[i];
        if(sum < min_sum){
            min_sum = sum;
        }
    }
    // Required start value:
    int start = 1 - min_sum;
    printf("Minimum Start Value: %d\n", start);
    return 0;
}