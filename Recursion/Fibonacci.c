#include<stdio.h>
// Find the nth fibonacci number
// recursion takes a stack 
// Space Complexity O(n) => Stack 
int fibonacci(int n){
    // Base Case
    if(n == 0 || n == 1){
        return n;
    }
    return fibonacci(n-1) + fibonacci(n-2);
}
int main(){
    int n = 5;
    printf("%d", fibonacci(5));
    return 0;
}