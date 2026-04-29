#include<stdio.h>
int main(){
    int height[] = {1,8,6,2,5,4,8,3,7};
    int n = sizeof(height) / sizeof(height[0]);
    // Initial Setup
    int left = 0;
    int right = n-1;
    int max_area = 0; 
    // Edge Case : Stop when left = right
    while(left < right){
        int width = right - left;
        int h;
        if(height[left] < height[right]) 
            h = height[left];
        else
            h = height[right]; 
        int area = h * width;
        if(area > max_area){
            max_area = area;
        }  
        // Move the smaller height 
        if(height[left] < height[right]){
            left++;
        }else{
            right--;
        }
    }
    printf("Maximum water stored: %d\n", max_area);
    return 0;
}