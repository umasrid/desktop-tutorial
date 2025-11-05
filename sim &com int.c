/*write a C programme to calculate simple interest and compound
interest*/

#include<stdio.h>
#include<math.h>
int main()
{
	float p,t,r,sim,ci;
	printf("enter principle amount");
	scanf("%f",&p);
	
	printf("\nenter time");
	scanf("%f",&t);
	
	printf("\nenter rate");
	scanf("%f",&r);
	
	sim=(p*r*t)/100.0;
	ci=p*pow((1+r/100),t)-p;
	
	printf("\nsimple interest is %f",sim);
	printf("\ncompound interest is %f",ci);
	
	return 0;
}
