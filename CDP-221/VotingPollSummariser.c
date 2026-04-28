#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int count[6] = {0}, valid = 0, invalid = 0;
    for(int i=0; i<n; i++){
        int v;
        scanf("%d", &v);
        if(v >= 1 && v <= 5){
            count[v]++;
            valid++;
        }else{
            invalid++;
        }
    }
    int winner = 1;
    for(int i=2; i<=5; i++){
        if(count[i] > count[winner])
            winner = i;
    }
    printf("WINNER: CANDIDATE %d\n", winner);
    return 0;
}
