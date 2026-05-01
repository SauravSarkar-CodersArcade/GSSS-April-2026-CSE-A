#include<stdio.h>
int main(){
    int n = 4;
    int k = 1;
    if( (n & (1 << k)) != 0){
        printf("Bit is set.\n");
    }else{
        printf("Bit is not set.\n");
    }
    return 0;
}
