#include <stdio.h>
#include <math.h>
int main () {
    int x;
    printf("enter a positive integer:");
    scanf("%d",&x);
    if (x <=0){
        printf("please enter a positive number\n");
        return 0;
    }

int root = sqrt(x);
if (root * root ==x) {
     printf("%d is perfect square\n",x);
}
else{
     printf("%d is not perfect square\n",x);
}
return 0;
}
