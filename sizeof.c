#include<stdio.h>
int main(){
    printf("int: %d \n", sizeof(int));
    printf("float: %d\n", sizeof(float));
    printf("double: %d\n", sizeof(double));
    printf("char: %d\n", sizeof(char));
    const double PI=3.14;
    printf("%f",PI);
    return 0;
}