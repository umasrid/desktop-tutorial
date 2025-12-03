/* WRITE A C PROGRAMME TO PRINT THE REVERSE OF THE GIVEN ARRAY */
#include<stdio.h>
int main()
{
	int a[5],i;
	
	printf("enter any five numbers ");
	
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
		printf("%d",a[i]);
	}
	for(i=5;i>=0;i--)
	{
		printf("The reverse of given array is %d",a[i]);
	}
}
