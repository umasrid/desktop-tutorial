/* WRITE A C PROGRAMME TO PRINT REVERSE OF A GIVEN NUMBER */

#include<stdio.h>
int main()
{
	int n,r,p=0;
	
	printf("enter any positive integer value");
	scanf("%d",&n);

	while(n != 0)
	{
		r = n % 10;
		p = p * 10 + r;
		n = n / 10;
	}
	printf("the reverse of given positive integer value is %d",p);
}











