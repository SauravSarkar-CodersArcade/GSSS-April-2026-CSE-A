#include<stdio.h>
#include<stdbool.h>
bool lemonadeChange(int* bills, int billSize){
    int five = 0, ten = 0;
    for(int i=0; i<billSize; i++){
        int bill = bills[i];
        if(bill == 5){
            five++;
        }else if(bill == 10){
            if(five == 0) return false;
            five--;
            ten++;
        }else{
            if(ten > 0 && five > 0){
                ten--;
                five--;
            }else if( five >= 3){
                five -= 3;
            }else{
                return false;
            }
        }
    }
    return true;
}
