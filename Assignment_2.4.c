#include <stdio.h>
int main() {
    char ch;
    printf("enter a lowercase letter:");
    scanf("%c",&ch);
    if(ch >='a' && ch<='z') { 
        ch =ch-('a'-'A');
        printf("uppercase: %c\n",ch);
    }
   // else {
     //   printf("not a lowercase\n");
 // }
    return 0;
}