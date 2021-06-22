#include<stdio.h>
int main(){
    int rating;
    printf("enter your rating: ");
    scanf("%d",&rating);
    switch(rating)
    {
    case 1 /* constant-expression */: printf("your rating is 1\n");
        /* code */
        break;
    case 2: printf("your rating is 2\n");
     break;
    case 3: printf("your rating is 3 \n");
     break;
    case 4: printf("your rating is 5\n");
     break;
    case 5: printf("your rating is 5\n");
     break;
    default: printf("Invalid!");
        break;
    }
    return 0;
}