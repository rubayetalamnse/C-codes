#include <stdio.h>
int main()
{
   float length, breadth, area;
   printf("enter the value of length : \n");
   scanf("%f", &length);
   printf(" the value of length is %f \n", length);
   printf("enter the value of breadth \n");
   scanf("%f", &breadth);
   printf(" the value of breadth is %f \n", breadth);
   area = length * breadth;
   printf("The value of area is : %f", area);

   return 0;
}