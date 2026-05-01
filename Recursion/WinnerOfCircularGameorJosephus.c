#include<stdio.h>
// Always create a helper function 
int solve(int n, int k){
    // Base Case
    // If there is one person in the circle
    // He/she is the winner
    if(n == 1){
        // This is for 0-modulo
        return 0; // We will add 1 to the answer later
    }
    return (solve(n-1, k) + k) % n;
}
int findTheWinner(int n, int k){
    int winner = solve(n, k) + 1; // 1 - modulo answer
    return winner;
}
int main(){
    printf("%d\n", findTheWinner(5,2));
    printf("%d\n", findTheWinner(6,5));
}