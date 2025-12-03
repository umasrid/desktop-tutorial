/*WRITE A C PROGRAMME TO PRINT CALL BY REFERENCE  */
#include<stdio.h>
swap(int*,int*);
void main()
{
	int a,b;
	printf("Enter any two integers: ");
	scanf("%d %d", &a, &b);
	printf("Before swap %d %d. ",a,b);
	swap(&a,&b);
	printf("After swap %d %d. ",a,b);	
} 
swap(int*x,int*y)
{
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
}
