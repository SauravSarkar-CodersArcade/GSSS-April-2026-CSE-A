#include<stdio.h>
int bs_sq_root(int n){
    int s = 0;
    int e = n; // End is the number itself
    int ans = 0;
    while(s <= e){
        int mid = s + (e-s)/2;
        int square = mid * mid;
        if(square == n){
            return mid;
        }else if(square > n){
            e = mid -1; // It is out of range - move left
        }else{
            // Store the ans & move to right for the ans
            ans = mid;
            s = mid +1; 
        }
    }
    return ans;
}
int main(){
    printf("%d\n", bs_sq_root(36)); // 6
    printf("%d\n", bs_sq_root(37)); // 6
    printf("%d\n", bs_sq_root(24)); // 4
}