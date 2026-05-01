#include<stdio.h>
int main(){
    int n = 10;
    int k = 0;
    int result = n | (1 << k);
    printf("%d\n", result);
    return 0;
}
