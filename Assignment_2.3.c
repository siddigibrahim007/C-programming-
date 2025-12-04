#include<stdio.h>
#include<ctype.h>
int main () {
    char ch;
    printf("enter the character:");
    scanf("%c",&ch);
    if((ch >= 'A'&& ch <='Z')||(ch >='a' && ch <='z')){
        printf("%c is alphabet letter\n",ch);
    }
        else if(ch >='0' && ch <='9'){
            printf("%c is digit\n",ch);}
            else {
                printf("%c is nither a letter nor a digit\n",ch);
            
        } 
        return 0;
}