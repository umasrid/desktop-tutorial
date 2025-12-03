/* WRITE A C PROGRAMME TO SEARCH AN ELEMENT BY USING LINEAR SEARCH*/
#include<stdio.h>
int main()
{
	int a[10],i,target,found=0;
	printf("Enter any 10 integer numbers");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
		printf("\nEnter an element to be searched");
		scanf("%d",target);
    }
    for(i=0;i<10;i++)
    {
    	if(target==a[i])
		{
			found=1;
			break;
		}
	}
	if(found==1)
	printf("Element is found");
	else
	printf("Element is not found");
	
}
