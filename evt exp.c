/*Write a C programme to evaluate the following expression
a/b*c-b+a*d/3*/
#include<stdio.h>
int main()
{
	int a,b,c,d,res;
	
	printf("\nenter the values of a");
	scanf("%d",&a);
	
	printf("\nenter the values of b");
	scanf("%d",&b);
	
	printf("\nenter the values of c");
	scanf("%d",&c);
	
	printf("\nenter the values of d");
	scanf("%d",&d);
	
	res=a/b*c-b+a*d/3;
	
	printf("\nThe value of expression is %d",res);
	return 0;
	
	
	
	
	
	
	
}








