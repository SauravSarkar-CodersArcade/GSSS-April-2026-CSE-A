#include<stdio.h>
void findMinimumCoins(int coins[], int V, int n){
    int result[100]; // To store the coins
    int count = 0; // Store the number of coins
    // It is greedy because we are intentionally taking largest
    // Traverse from largest [End] to smallest [Begin]
    // If the array is not sorted, sort the array
    for(int i=n-1; i>=0; i--){
        while(V >= coins[i]){
            V -= coins[i]; // Reducing the amount
            result[count++] = coins[i]; // Storing coin
        }
    }
    // Print selected coins
    printf("Coins selected: ");
    for(int i=0; i<count; i++){
        printf("%d ", result[i]);
    }
    printf("\n");
    // Print the minimum number of coins
    printf("Minimum coins selected: %d\n", count);
}
int main(){
    int coins[] = {1,2,5,10,20,50,100,200,500,2000};
    int n = sizeof(coins) / sizeof(coins[0]);
    int V1 = 91;
    findMinimumCoins(coins, V1, n);
    int V2 = 31;
    findMinimumCoins(coins, V2, n);
    return 0;
}