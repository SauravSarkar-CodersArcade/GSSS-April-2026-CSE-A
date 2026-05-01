#include<stdio.h>
int sumOfDigits(int n){
    // Base Case 
    if(n == 0){
        return 0;
    }
    return n % 10 + sumOfDigits(n / 10);
}
int countDigits(int n){
    if( n == 0){
        return 0;
    }
    return 1 + countDigits(n / 10);
}
int power(int x, int n){
    if(n == 0){
        return 1;
    }
    return x * power(x, n - 1);
}
int reverse(int n, int rev){
    if(n == 0){
        return rev; // Works for 0 or the ans
    }
    return reverse(n / 10, rev * 10 + n % 10);
}
int main(){
    printf("%d\n", sumOfDigits(1234));
    printf("%d\n", countDigits(1234));
    printf("%d\n", power(2,5));
    printf("%d\n", reverse(321, 0));
    printf("%d\n", reverse(120, 0));
    return 0;
}