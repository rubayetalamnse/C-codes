#include <stdio.h>
int main()
{
    int income, tax=0;
    printf("Enter your per year salary: ");
    scanf("%d", &income);
    if(income<250000)
    {
        tax=0;
    }
    if(income>=250000 && income<=500000)
    {
        tax= tax +(.05*income);
    }
    if(income>=500000 && income<=1000000 )
    {
        tax=tax +(.20*income);
    }
    if(income>=1000000)
    {
        tax=tax +(.30*income);
    }
    printf("your per year tax is %d",tax);
    return 0;
}




