#include<stdio.h>
void zigZag(int cols){
    for(int r=1; r<=3; r++){
        for(int c=1; c<=cols; c++){
            if(r==1 && c%4==3 || r==2 && c%2==0 ||
            r==3 && c%4 == 1){
                printf("* ");
            }else{
                printf("  ");
            }
        }printf("\n");
    }
}
int main(){
    zigZag(9); // Two Triangles
    zigZag(17); // Three Triangles
}