#include<stdio.h>
// This function is returning some address 
int * function(){
    // Mechanical Department
    static int x = 200;  // [0x1000abcd] [var[x] : value = 200]
    return &x; // [0x1000abcd] this address is returned
}
int main(){
    // CSE Department
    int * ptr = function(); // [0x1000abcd]
    // Print the value inside x [De-referencing]
    printf("Value inside x: %d\n", *ptr);
    return 0;
}
// Storage Classes 
// static extern auto register