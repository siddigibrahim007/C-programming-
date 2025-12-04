#include<stdio.h>
int main (){
    int x, y;
    printf("enter first number:");
    scanf("%d",&x);
     printf("enter second number:");
    scanf("%d",&y);
    if (y==0){
        printf("%d cannot check \n");
    }
   else if(x % y==0){
        printf("%d is multiple\n",x,y);
    }
     else{
        printf("%d is not multiple\n",x,y);
     }   
     return 0;
    }