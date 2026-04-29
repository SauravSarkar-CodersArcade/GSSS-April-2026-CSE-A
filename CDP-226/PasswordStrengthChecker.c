#include<stdio.h>
#include<string.h> 
#include<ctype.h> // for single characters
int main(){
    char str[100]; // StrongP4ss str[i]
    printf("Enter password: ");
    scanf("%s", str);
    int len = strlen(str);
    int hasLower =0, hasUpper = 0, hasDigit = 0, 
    hasSpecial = 0;
    for(int i=0; i<len; i++){
        if(islower(str[i])) hasLower++;
        else if (isupper(str[i])) hasUpper++;
        else if(isdigit(str[i])) hasDigit++;
        else hasSpecial++; // Anything else is special 
    }
    if(len < 6){
        printf("WEAK\n");
    }
    else if(len >=12 && hasLower && hasUpper 
    && hasDigit && hasSpecial){
        printf("VERY STRONG\n");
    }
    else if(len >= 8 && hasUpper && hasDigit){
        printf("STRONG\n");
    }else{
        printf("MEDIUM\n");
    }
    return 0;
}