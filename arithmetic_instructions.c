#include <stdio.h>
#include <math.h>
int main()
{
    float a, b;
    a = 4;
    b = 5;
    int z;
    z = b * a; //legal instruction
    //b*a=z ; -->illegal instruction
    printf("print the value of z %f \n", z);
    printf("print the value of a-b %.2f \n", a - b);
    printf("print the value of a+b %.2f \n", a + b);
    printf("print the value of a*b %.2f \n", a * b);
    printf("print the value of a/b %.2f \n", a / b);
    printf("print the remainder of 5 when divided by 2 ---ans: %d", 5 % 2);
    //there's no operator to perform exponentiation in C
    //exponentiation (^) can be done by **
    printf("\n the exponentiation of 4 is :%.2f \n ", pow(4, 2));
    int total = 50;
    int count = 5;
    float average;
    average = (float)total / count;
    printf("\naverage is : %.2f", average);
    int abdul = 2;
    abdul += 1;
     printf("\n value of abdul : %d \n", abdul);
    abdul -= 1;
     printf("value of abdul  : %d \n", abdul);
    abdul *= 2;
     printf("value of abdul : %d \n", abdul);
    abdul /= 10;

   
    printf("value of abdul : %.2f \n", abdul);
    
    return 0;
}