#include<stdio.h>
int main(){
    int num;
    printf("enter the value of num: ");
    scanf("%d",&num);
    while(num<20)
    {
        printf("\n%d",num);
        num++;
    }
    return 0;
}