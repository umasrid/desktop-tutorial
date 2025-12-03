/*WRITE A C PROGRAMME TO PERFORM THE SUM OF THE NUMBERS USING DYNAMIC MEMORY ALLOCATION MALLOC */
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,i,*ptr,sum=0;
	printf("Enter the number of elements : ");
	scanf("%d", &n);
	
	ptr=(int*)malloc(n*sizeof(int));
	
	printf("\nEnter elements of array : ");
	for(i=0;i<n;++i)
	    scanf("%d",ptr+i);
	
	for(i=0;i<n;++i)
	    sum=sum+ *(ptr+i);
	    
	printf("\nSum of elements in a array is : %d",sum);
	
	return 0;
}






















