/*write a c programme to print sum of n natural numbers */

#include<stdio.h>
#include<math.h>

int main()

{
	int i,n,sum=0;
	
	printf("Enter any positive number ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	
	{
		sum=sum+i;
	}
	
	printf("sum of natural number is %d",sum);
}










