#include<stdio.h>
int main()
{
 int num,i;
 printf("Enter the number:");
 scanf("%d",&num);
 i=1;
 while(i<=10){
    printf("%dx%d=%d\n",num,i,num*i);
    i++;
 }
   return 0;
}
