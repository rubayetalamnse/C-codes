#include<stdio.h>
int main(){
    int English, Math, Science, total;
    printf("Enter Your Marks for English:");
    scanf("%d",&English);
    printf("Enter Your Marks for Math:");
    scanf("%d",&Math);
    printf("Enter Your Marks for Science:");
    scanf("%d",&Science);
    total=(English+Math+Science)/3;

    if((total<40)||(English<33)||(Math<33)||(Science<33))
    {
        printf("your percentage is %d  and you have failed.",total);
        printf("Better Luck Next Time!");
    }
    else
    {
        printf("You have passed");
    }
    return 0;
}