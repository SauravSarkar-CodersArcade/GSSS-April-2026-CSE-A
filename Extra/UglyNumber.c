#include<stdio.h>
#include<stdbool.h>
bool isUgly(int n) {
    if(n <= 0)
        return false;
    int factors[] = {2, 3, 5};

    for(int i=0; i<3; i++){
        while(n % factors[i] == 0){
            n /= factors[i];
        }
    }    
    return n == 1;
}
int main(){
    printf("%d\n", isUgly(8));
    printf("%d\n", isUgly(17));
    printf("%d\n", isUgly(51));
    printf("%d\n", isUgly(24));
    return 0;
}