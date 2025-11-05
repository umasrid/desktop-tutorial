/*write a C programme to find macimum of three numbers using
conditional operaters*/

#include<stdio.h>

int main()
{
	int a,b,c,max;
	printf("enter any three integers ");
	scanf("%d%d%d",&a,&b,&c);
	max=a > b ? (a > c ? a : b) : (b > c ? b : c);
	printf("maximum of three integers %d%d%d is %d" ,a,b,c,max);
	

}






