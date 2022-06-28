#include <stdio.h>
int main()
{
    int side1, side2, side3;

    printf("Input first side: \n");
    scanf("%d" , &side1);
    printf("Input secound side: \n");
    scanf("%d" , &side2);
    printf("Input third side: \n");
    scanf("%d" , &side3);

    if((side1 + side2) > side3)
    {
        if((side2 + side3) > side1)
        {
            if((side1 + side3) > side2)
            {
                printf("Triangle is valid.");
            }
            else
            {
                printf("Triangle is not valid.");
            }
        }
        else
        {
            printf("Triangle is not valid.");
        }
    }
    else
    {
        printf("Triangle is not valid.");
    }
    return 0;
}
