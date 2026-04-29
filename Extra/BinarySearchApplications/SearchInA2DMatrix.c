#include<stdio.h>
#include<stdbool.h>
bool searchMatrix(int** matrix, int matrixSize, int* matrixColSize, 
    int target){
    int row = matrixSize;
    int col = matrixColSize[0];
    int start = 0;
    int end = row * col - 1; // 3 x 4 - 1 = 12 - 1 = 11
    while(start <= end){
        int mid = start + (end - start) / 2;
        // row = [mid/col]; col = [mid%col]
        // adjoint of a matrix / determinant  
        int element = matrix[mid/col][mid%col];
        if(element == target){
            return true;
        }else if(element < target){
            start = mid + 1;
        }else{
            end = mid -1;
        }
    }
    return false;
}