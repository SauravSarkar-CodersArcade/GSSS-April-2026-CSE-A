#include<stdio.h>
int reverseInteger(int n){
    // Base Case  - When we are reaching 0 - we stop
    int ans = 0;
    while(n > 0){
        int digit = n % 10;
        ans = ans * 10 + digit;
        n = n / 10;
    }
    return ans;
}
int main(){
    printf("The reverse of 123 is: %d\n", reverseInteger(123));
    printf("The reverse of 120 is: %d\n", reverseInteger(120));
    return 0;
}