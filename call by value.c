/*WRITE A C PROGRAMME TO PRINT CALL BY VALUE */
#include<stdio.h>
swap(int,int);
int main()
{
	int a,b;
	printf("Enter any two integers");
	scanf("%d %d", &a, &b);
	printf("Before swap %d %d",a,b);
	swap(a,b);
	printf("After swap %d %d",a,b);	
} 
swap(intx,inty)
{
	int temp,x,y;
	temp=x;
	x=y;
	y=temp;
}

    








