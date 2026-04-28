#include<stdio.h>
int main(){
    int n;
    printf("Enter size: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements (0/1):\n");
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    int max = 0; // stores maximum streak
    int count = 0; // stores current streak
    for(int i=0; i<n; i++){
        if(arr[i] == 1){
            count++; // increase the streak
            if(count > max){
                max = count; // update max streak
            }
        }else{
            count = 0; // reset the streak
        }
    }
    printf("Max consecutive 1s: %d\n", max);
}