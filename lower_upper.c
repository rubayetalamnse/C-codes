#include<stdio.h>
int main(){
    char ch;
    printf("Enter any character: ");
    scanf("%c",&ch);
    if(ch>='a' && ch<='z')
    {
        printf("\n%c is a lowercase letter. ",ch);
    }
    else if(ch>= 'A' && ch<='Z')
    {
        printf("\n%c is an uppercase letter. ",ch);
    }
    else
    {
        printf("%c is an invalid character.",ch);
    }
    return 0;
}