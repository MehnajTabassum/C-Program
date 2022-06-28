#include<stdio.h>
int main()
{
    char c;
    int a;

    printf("Enter a character:");
    scanf("%c",&c);

    if(c>='a'&&c<='z')
    {
        a = c-32;
        printf("%c",a);
    }
    else if(c>='A'&&c<='Z')
    {
        a = c+32;
        printf("%c",a);
    }
    return 0;
}
