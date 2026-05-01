#include<stdio.h>
int main(){
    int n = 12; // 1100
    int rsb_value = n & -n;
    // -n is actually bitwise not 
    // not normal negative number
    // 1s compliment + 1 = 2s compliment
    printf("RSB Value: %d\n", rsb_value);
    return 0;
}
