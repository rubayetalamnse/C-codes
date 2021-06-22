#include <stdio.h>
int main()
{
    int age, vippass = 0;
    vippass = 1;
    printf("enter your age: \n");
    scanf("%d", &age);
    if ((age <= 70 && age >=18) || (vippass = 1))
    {
        printf("you can't drive, you are old.");
    }
    else
    {
        printf("you can drive!");
    }
    return 0;
}