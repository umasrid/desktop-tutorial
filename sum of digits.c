/* WRITE A C PROGRAMME TO PRINT THE SUM OF THE DIGITS IN THE GIVEN NUMBER */

#include<stdio.h>
int main()
{
	int n,r,s;
	
	printf("enter any positive number");
	scanf("%d",&n);
	
	while(n != 0)
    {
    	r = n % 10;	
        s = s + r;
    	n = n / 10;
	}
	printf("the sum of the digits in the number is %d",s);
}






