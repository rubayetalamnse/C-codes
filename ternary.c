#include <stdio.h>
int main()
{
    int a;
    printf("Enter a number: ");
    
    scanf("%d", &a);
    //one liner=ternary operator
    (a > 10) ? printf("the value of a is more than 10") : printf("the value of a is less than 10");
    return 0;
}