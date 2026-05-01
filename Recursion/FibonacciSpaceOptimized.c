#include<stdio.h> // SC - O(1) [Only variables] TC O(n)
int fibonacci(int n){
    if(n == 0 || n == 1){
        return n;
    }
    int p2 = 0;
    int p1 = 1;
    for(int i=2; i<=n; i++){
        int curr = p2 + p1;
        p2 = p1;
        p1 = curr;
    }
    // return curr; // Wrong because it's a local variable
    return p1; // p1 will be equal to curr in the last iteration
}
int main(){
    int n = 6;
    printf("%d", fibonacci(n));
    return 0;
}