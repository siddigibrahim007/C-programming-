#include<stdio.h>
#include<math.h>
int main(){
    int rows,i,j;
    printf("enter number rows:");
    scanf("%d",&rows);
    for(i=rows; i>=1; i--){
        for(j=1; j<=i; j++){
    printf("* ");
        }
        printf("\n");

    
        }
        return 0;

}