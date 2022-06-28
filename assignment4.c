#include<stdio.h>
int main()
{
    int sub1,sub2,sub3,sub4,sub5,total,Average;
    printf("Enter marks of five subjects:\n");
    scanf("%d %d %d %d %d",&sub1,&sub2,&sub3,&sub4,&sub5);
    total=sub1+sub2+sub3+sub4+sub5;
    printf("total = %d\n",total);
    Average=total/5;
    printf("Average = %d\n",Average);
    return 0;


}
