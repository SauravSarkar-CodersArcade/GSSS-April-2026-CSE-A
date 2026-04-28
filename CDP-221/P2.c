#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    for (int i=0; i<n; i++){
        char name[50]; // An array itself is an adress
        int marks;
        scanf("%s %d", name, &marks);
        if(marks < 0 || marks > 100)
            printf("%s: %d INVALID\n", name, marks);
        else if(marks >= 90)
            printf("%s: %d A+\n", name, marks);
        else if(marks >= 80)
            printf("%s: %d A\n", name, marks);   
        else if(marks >= 70)
            printf("%s: %d B\n", name, marks);
        else if(marks >= 60)
            printf("%s: %d C\n", name, marks);
        else if(marks >= 50)
            printf("%s: %d D\n", name, marks);
        else
            printf("%s: %d F\n", name, marks);                 
    }
    return 0;
}