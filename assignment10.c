
#include <stdio.h>
int main()
{
    int num1, num2;
    printf("Enter numbers: ");
    scanf("%d %d", &num1,&num2);
    if(num1 > num2)
    {
        printf("Max = %d\n", num1);
    }
    if(num2 > num1)
    {
        printf("Max = %d\n", num2);
    }
    if(num1 < num2)
    {
        printf("Min = %d\n" , num1);
    }
    if(num1 > num2)
    {
        printf("Min = %d\n" , num2);
    }
    return 0;
}
