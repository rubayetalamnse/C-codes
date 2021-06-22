#include<stdio.h>
int main(){
    int num1,num2,num3,num4;
    printf("\nEnter the first number: ");
    scanf("%d",&num1);
    printf("\nEnter the second number: ");
    scanf("%d",&num2);
    printf("\nEnter the third number: ");
    scanf("%d",&num3);
    printf("\nEnter the fourth number: ");
    scanf("%d",&num4);
    if(num1>num2 && num1>num3 && num1>num4)
    {
        printf("The greatest number is %d",num1);
    }
    else if(num2>num1 && num2>num3 && num2>num4)
    {
        printf("The greatest number is %d",num2);
    }
    if(num3>num2 && num3>num1 && num3>num4)
    {
        printf("The greatest number is %d",num3);
    }
    else
    {
        printf("the greatest number is %d",num4);
    }
    return 0;
}