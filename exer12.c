#include <stdio.h>
int main()
{
    int hour, month_days, weekend =2, no_of_weekend;
    float perHour, salary;
    char id[10];
    //int January, March, May, July, August, October, December;
    printf("Input the Employees ID(Max. 100000 chars):");
    scanf("%s", &id);
    printf("\n Input the working hrs: ");
    scanf("%d", &hour);
    printf("\n Salary amount/hr: ");
    scanf("%f", &perHour);
    printf("\nEnter the days of a month:");
    scanf("%d", &month_days);
    printf("\nEnter no of Weekends: ");
    scanf("%d",&no_of_weekend);
    no_of_weekend= weekend*no_of_weekend;
    salary = hour * perHour * (month_days-no_of_weekend);
   
    printf("\n Salary of the month is: %.2f", salary);
    return 0;
}