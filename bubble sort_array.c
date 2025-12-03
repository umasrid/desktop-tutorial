/*WRITE A C PROGRAMME TO ARRANGE ELEMENTS IN ORDER USING BUBBLE SORT*/
#include<stdio.h>
int main()
{
	int arr[10],i,j,tem;
	printf("Enter any 10 elements of an array ");
	for(i=0;i<10;i++)
	{
	scanf("%d",&arr[i]);
    }
	for(i=0;i<10-1;i++)
	{
		for(j=0;j<10-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				tem=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=tem;
			}
		}
	}
	printf("Sorted elements are ");
	for(i=0;i<10;i++)
	{
	printf("  %d",arr[i]);
    }
	return 0;
}
