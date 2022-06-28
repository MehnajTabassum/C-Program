#include<stdio.h>
int main()
{
    int first_number,second_number,result;
    printf("Input first number:");
    scanf("%d",&first_number);
    printf("Input second number:");
    scanf("%d",&second_number);
    result=first_number+second_number;
    printf("sum of %d and %d is %d",first_number,second_number,result);
    return 0;

}
