/*WRITE A C PROGRAMME TO FIND MAXIMUM AND MINIMUM ELEMENTS OF AN ARRAY */
#include<stdio.h>
int main()
{
	int a[30],i,n,min,max;
	printf("\n ENTER THE SIZE OF AN ARRAY ");
	scanf("%d",&n);
	printf("\n ENTER THE ELEMENTS ");
	for(i=0;i<n;i++)
	    scanf("%d",&a[i]);
	min=a[0];
	max=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]>max)
		    max=a[i];
		if(a[i]<min)
		    min=a[i];    
	}
	printf("\n MIN AND MAX ELEMENTS ARE %d %d",min,max);
	
	
	
	
	
	
	
	
	    
}
