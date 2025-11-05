/*write a c programme to print factorial of a given number */

#include<stdio.h>
#include<math.h>

int main()

{
	int i,n,f=1;
	printf("enter any positive number ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		f=f*i;
	}
	
	printf("the factorial of given number is %d",f);
	
}










