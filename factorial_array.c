/*WRITE A C PROGRAMME TO FIND FACTORIAL OF A GIVEN NUMBER USING RECURSION */
#include<stdio.h>
int fact(int x);
int main()
{
	int n;
	printf("Enter any positive number ");
	scanf("%d",&n);
	
	printf("Factorial is %d",fact(n));
}
int fact(int x)
{
	if(x==1)
	    return x;
	else
	    return x * fact(x-1);    
}
