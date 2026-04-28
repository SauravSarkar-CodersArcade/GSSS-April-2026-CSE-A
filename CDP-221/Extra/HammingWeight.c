#include<stdio.h>
int hammingWeight(int n){
    int count = 0;
    while(n > 0){
        if(n & 1){
            count++;
        }
        n = n >> 1;
    }
    return count;
}
int main(){
    printf("Hamming weight of 11: %d\n", hammingWeight(11));
    printf("Hamming weight of 5: %d\n", hammingWeight(5));
    printf("Hamming weight of 0: %d\n", hammingWeight(0));
    return 0;
}