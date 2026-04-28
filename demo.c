#include<stdio.h>
#include<stdbool.h>
enum Boolean {
    TRUE=100, FALSE, A=200, B, C
};
int main(){
    bool status = true;
    // Format Specifiers -> Integer %d, %i
    printf("%d\n", status);
    printf("%i\n", status);
    enum Boolean b = FALSE;
    printf("%d\n", b);
    // Format Specifier for sizeof()
    printf("%llu bytes.\n", sizeof(b));
    printf("%d\n", (7&9));
    printf("%d\n", (5|6));
    printf("%d\n", (4^8));
    printf("%d\n", (10 >> 2));
    printf("%d\n", (10 << 2));
    printf("%d\n", ~500);
    printf("%d\n", ~-499);
    return 0;
}