//Write a C program to read an amount (integer value) and break the amount into smallest possible number of bank notes.
//Note: The possible banknotes are 100, 50, 20, 10, 5, 2 and 1.
#include<stdio.h>
int main(){
    int amt,total_notes;
    printf("Enter the amount of money:");
    scanf("%d",&amt);
    total_notes=(int)amt/100;
    printf("\nthere is %d banknotes of 100 tk. ",total_notes);
    total_notes=amt-(amt%100);
    printf("\nthere is %d banknotes of 50 tk. ",total_notes);
    total_notes=amt-(amt%100);
    printf("\nthere is %d banknotes of 20 tk. ",total_notes);
    total_notes=amt-(amt%100);
    printf("\nthere is %d banknotes of 10 tk. ",total_notes);
    total_notes=amt-(amt%100);
    printf("\nthere is %d banknotes of 5 tk. ",total_notes);
    total_notes=amt-(amt%100);
    printf("\nthere is %d banknotes of 2 tk. ",total_notes);
    total_notes=amt-(amt%100);
    printf("\nthere is %d banknotes of 1 tk. ",total_notes);
    return 0;
}