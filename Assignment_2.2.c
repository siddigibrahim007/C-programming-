#include <stdio.h>
#include<float.h>
int main () {
    char op;
    double num1,num2,res;
    printf("enter operator(+,-,*,/):");
    scanf("%c",&op);
    printf("enter two number ");
    scanf("%lf %lf",&num1,&num2);
    switch (op){
        case '+':
        res=num1+num2;
        printf("res: %.2lf\n",res);
        break;
        case '-':
        res=num1-num2;
        printf("res: %.2lf\n",res);
        break;
        case '*':
        res=num1*num2;
        printf("res: %.2lf\n",res);
        break;
        case '/':
        if(num2 !=0)
            printf("res: %.2lf\n",num1/num2);
            else 
                printf("error: not exection\n");
            break;
        default:
        printf("error: incorrect opertor\n");
    }
    return 0;

}