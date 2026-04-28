#include<stdio.h>
int main(){
    int n;
    // Read the number of days
    printf("Enter the number of days: ");
    scanf("%d", &n);
    // Edge case : no data
    if( n == 0){
        printf("NO DATA\n");
        return 0;
    }
    int arr[n];
    int i;
    // Input the sales values
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    int max = arr[0]; // assuming max a 1st
    int min = arr[0]; // assuming min a 1st
    int total = 0;

    for(i=0; i<n; i++){
        total += arr[i]; // add to total [sum]
        // update max
        if(arr[i] > max) max = arr[i];
        // update min
        if(arr[i] < min) min = arr[i];
    }
    float avg = (float) total / n;
    int count = 0;
    // count elements greater than avg
    for(i=0; i<n; i++){
        if(arr[i] > avg) count++;
    } 
    // Output
    printf("MAX: %d\n", max);
    printf("MIN: %d\n", min);
    printf("TOTAL: %d\n", total);
    printf("AVG: %0.2f\n", avg);
    printf("ABOVE AVG: %d\n", count);

    return 0;
}