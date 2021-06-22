#include<stdio.h>
int main(){
    int marks;
    printf("Enter Your Marks: ");
    scanf("%d",&marks);
    switch(marks/10){
       case 10 :
       case 9 :
           /* Marks between 90-100 */
           printf("Your Grade : A\n" );
           break;
       case 8 :
       case 7 :
           /* Marks between 70-89 */
           printf("Your Grade : B\n" );
           break;
       case 6 :
           /* Marks between 60-69 */
           printf("Your Grade : C\n" );
           break;
       case 5 :
       case 4 :
           /* Marks between 40-59 */
           printf("Your Grade : D\n" );
           break;
       default :
           /* Marks less than 40 */
           printf("You failed\n" );
   }
 
   return 0;
}