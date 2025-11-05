/*write a C programme to generate the electricity bill based on the following information
if units are 1 to 50,unit cost is 2.5Rs and charge is 30Rs
if units are 51 to 100,unit cost is 3Rs and charge is 50Rs
if units are 101 to 200,unit cost is 3.5Rs and charge is 75Rs
if units are 201 to 300,unit cost is 4Rs and charge is 100Rs
if units are more than 300,unit cost is 5Rs and charge is 125Rs  */

#include<stdio.h>

int main()
{
	int units;
	float uc,charge,total;
	
	printf("no.of units consumed ");
	scanf("%d",&units);
	
	if(units<=50)
	{
		uc=units*2.50;
		charge=30;
	}
	else if(units>=51 && units<=100)
	{
		uc=units*3.00;
		charge=50;
	}
	else if(units<=101 && units>=200)
	{
		uc=units*3.50;
		charge=75;
	}
	else if(units<=201 && units>=300)
	{
		uc=units*4.00;
		charge=100;
	}
	else 
	{
		uc=units*5.00;
		charge=125;
	}
	total=uc+charge;
	printf("\nThe total electricity bill is %f",total);
	return 0;
	
	
	
	
	
	
}








