#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter three numbers:");
    scanf("%d %d %d",&a,&b,&c);

    if(a>b&&b>c||c>b&&b>a)
    {
        printf("Middle Number:%d",b);
    }
    if(a>c&&c>b||b>c&&c>a)
    {
        printf("Middle Number:%d",c);
    }
    if(b>a&&a>c||c>a&&a>b)
    {
        printf("Middle Number:%d",a);
    }
    return 0;
}
