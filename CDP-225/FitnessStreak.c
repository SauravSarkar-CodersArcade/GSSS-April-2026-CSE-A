#include<stdio.h>
int main(){
    int n, T;
    printf("Enter the number of days: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter steps:\n");
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    printf("Enter threshold (T): ");
    scanf("%d", &T);
    int max_len = 0;
    // Both initially invalid - streak 0
    int start = -1, end = -1;  
    // Try all the subarrays
    for(int i=0; i<n; i++){
        int sum = 0;
        for(int j=i; j<n; j++){
            sum += arr[j];
            int length = j - i + 1;
            float avg = (float) sum / length;
            
            if(avg >= T){
                if(length > max_len){
                    max_len = length; // streak update
                    start = i;
                    end = j;
                }
            }
        }
    }
    if(max_len == 0){
        printf("No Streak\n");
    }else{
        printf("LONGEST STREAK: %d DAYS / START: %d / END: %d\n",
        max_len, start + 1, end + 1);
    }
    return 0;
}