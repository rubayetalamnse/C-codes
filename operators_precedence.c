#include<stdio.h>
int main(){
    int x=2;
    int y=3;
    printf("the value of 3x-8y is %d \n", (3*x -8*y));
    printf("the value of 8y/3x is %d \n", (8*y/3*x)); //this is giving us wrong answer
    //(8*3)/3*2
    //(24/3)*2
    //8*2 = 16
    printf("the value of %f \n ", 3.0/8-2); //first division, then subtraction
    // real number = float, double
    //Q3. Write a program to determine whether a number is divisible by 97 or not.
    int num;
    printf("enter the number : \n");
    scanf("%d",&num);
    printf("the divisibility test : %d",num%97);
    //if 0 comes means divisble
    //if 0 doesn't come then the number isn't divisible.
    return 0;
}