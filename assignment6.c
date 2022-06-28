#include<stdio.h>
int main()
{
int distance;
float fuel,Average;
printf("Inpute total distance in km:");
scanf("%d",&distance);
printf("Input total fuel spent in liters:");
scanf("%f",&fuel);
Average=distance/fuel;
printf("Average consumption(km/lt)%.2f\n",Average);

return 0;
}


