#include<stdio.h>
int main()
{
    int a,b,temp;
    printf("Inpute first number:\n");
    scanf("%d",&a);
    printf("Inpute second number:\n");
    scanf("%d",&b);
    temp=a;
    a=b;
    b=temp;
    printf("Updated first number:%d\n",a);
    printf("Updated second number:%d\n",b);
    return 0;

}
