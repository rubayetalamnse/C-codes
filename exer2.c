#include<stdio.h>
int main(){
    int a,b,c;
    printf("Input the first integer:");
    scanf("%d",&a);
    printf("\nInput the second integer:");
    scanf("%d",&b);
    printf("\nInput the thrird integer:");
    scanf("%d",&c);
    if(a>b && a>c)
    {
        printf("maximum value of three integers: %d",a);
    }
    else if(b>a && b>c)
    {
        printf("maximum value of three integers: %d",b);
    }
    else
    {
        printf("maximum value of three integers: %d",c);
    }
    return 0;
}
