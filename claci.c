#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
int main(){
    printf("\nEnter your expressions : ");
    char innum[100];
    scanf("%s",innum);
    // char innum[100] = "3+4-10*7/2";
    int result = 0;
    int temp = 0;
    int i = 0;
    char op = '+';

    for (i = 0; i<strlen(innum); i++ ){
        if(isdigit(innum[i])){
            temp = temp * 10 + (innum[i] - '0');
                }
            
        else {
            if (op == '+') result += temp;
            else if (op == '-') result -= temp ;
            else if (op == '*') result *= temp ;
            else if (op == '/') result /= temp ;
            op = innum[i];
            temp = 0 ;
        }
    
    
    
    
        }

        if (op == '+') result += temp;
        else if (op == '-') result -= temp ;
        else if (op == '*') result *= temp ;
        else if (op == '/') result /= temp ;

        printf("Result : %d\n", result);



}