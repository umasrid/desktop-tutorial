/*write a C programme to print average of five subjects marks*/
#include<stdio.h>

int main()
{
	int m1,m2,m3,m4,m5;
	float avg;
	printf("enter five subject marks");
	scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
	avg=(m1+m2+m3+m4+m5)/5.0;
	printf("\nThe average of five subjects marks is %f",avg);
}
