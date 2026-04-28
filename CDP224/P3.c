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
    // Prefix array
    int prefix[n];
    prefix[0] = arr[0];
    // Build the prefix sum
    for(int i=1; i<n; i++){
        prefix[i] = prefix[i-1] + arr[i];
    }
    int q;
    printf("Enter number of queries: ");
    scanf("%d", &q);
    while (q--)
    {
        int l, r;
        printf("Enter l & r: ");
        scanf("%d %d", &l, &r);
        int sum;
        if(l == 0){
            sum = prefix[r];
        } else{
            sum = prefix[r] - prefix[l-1];
        }
        printf("Sum=%d\n", sum);
    }
    
    return 0;
}