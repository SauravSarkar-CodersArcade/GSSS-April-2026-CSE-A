#include<stdio.h>

int main(){
    int n1 = 8;
    int n2 = 9;
    if((n1 & (n1-1)) == 0){
        printf("Power of 2\n");
    }else{
        printf("Not a Power of 2\n");
    }
    if((n2 & (n2-1)) == 0){
        printf("Power of 2\n");
    }else{
        printf("Not a Power of 2\n");
    }
    return 0;
}
