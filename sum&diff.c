/*write a c programme to perform addition and difference of 
two integer numbers and two real numbers*/

#include<stdio.h>

int main()
{
	int num1,num2,add,diff;
	float n1,n2,sum,sub;
	
	printf("Enter any two integer numbers");
	scanf("%d%d",&num1,&num2);
	add=num1+num2;
	diff=num1-num2;
	printf("addition of two integer numbers are %d\n",add);
	printf("subtraction of two integer numbers are %d\n",diff);
	
	
	printf("Enter any two real numbers");
	scanf("%f%f",&n1,&n2);
	sum=n1+n2;
	sub=n1-n2;
	printf("addition of two real numbers are %f\n",sum);
	printf("subtraction of two real numbers are %f\n",sub);
	return 0;
}
	
	
	
	
	
	
	
	
	
	
