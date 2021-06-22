#include <stdio.h>
int main()
{
    char ch;
    printf("enter a character :");
    scanf("%c", &ch);
    //65-90=A-Z=UPPERCASE
    if (ch >= 65 && ch <= 90)
    {
        printf("\n%c is uppercase.", ch);
    }
    //97-122= a-z= lowercase letter
    else if (ch >= 97 && ch <= 122)
    {
        printf("\n %c is lowercase. ", ch);
    }
    else
    {
        printf("It is invalid.");
    }
    return 0;
}