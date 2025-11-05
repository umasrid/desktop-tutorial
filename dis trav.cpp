/*Write a C programme to find distance travelled by an object*/
#include<stdio.h>
int main()
{
	float u,a,t,d;
	printf("\nenter velocity");
	scanf("%f",&u);
	
	printf("\nenter acceleration");
	scanf("%f",&a);
	
	printf("\nenter time");
	scanf("%f",&t);
	
	d=(u*t)+(a*t*t)/2;
	
	printf("\ndistance travelled is %f",d);
	return 0;
	
	
	
	
	
	
	
	
}




