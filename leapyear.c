#include<stdio.h>
int main(){
    int year;
    printf("enter the year: ");
    scanf("%d",&year);
    if(year%4==0)
    {
        printf("it's leap year!");
    }
    else if(year%100==0)
    {
        printf("it's leap year.");
    }
    else if(year%100==0)
    {
        printf("it's  leap year.");
    }
    else
    {
        printf("it's not leap year!");
    }
    return 0;
}