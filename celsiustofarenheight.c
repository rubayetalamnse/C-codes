#include <stdio.h>
int main()
{
    float c, f;
    printf("enter the temperature in celsius \n");
    scanf("%f", &c);
    printf("the given temperature in celsius is %f\n",c);
    f = (c * 9 / 5) + 32;
    printf("the value of temperature in Farenheit is %f ", f);

    return 0;
}