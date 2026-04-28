#include<stdio.h>
int main(){
    int n, target;
    printf("Enter size: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the sorted array:\n");
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    printf("Enter target: ");
    scanf("%d", &target);
    int left = 0;
    int right = n - 1;
    int found = 0;
    while (left < right)
    {
        int sum = arr[left] + arr[right];
        if(sum == target){
            printf("PAIR FOUND: %d AND %d\n", 
                arr[left], arr[right]);
            found = 1;
            break;    
        }else if(sum < target){
            left++; // increase sum
        }else{
            right--; // decrease sum
        }
    }
    if(!found){
        printf("NO PAIR FOUND\n");
    }
    return 0;
}