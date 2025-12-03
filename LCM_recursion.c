/*WRITE A C PROGRAMME TO FIND THE LCM USING RECURSION */
#include<stdio.h>

int lcm(int,int);

int main()
{
	int n1,n2,result;
	
	printf("Enter two integer number ");
	scanf("%d %d", &n1, &n2);
	if(n1>n2)
	    result=lcm(n2,n1);
	else
	    result=lcm(n1,n2);
	    
	printf("LCM is %d",result);    
}
int lcm(int a,int b)
{
	static int temp=0;
	temp=temp+b;
	if(temp%a == 0 && temp%b == 0)
	    return temp;
	else
	    return lcm(a,b);     
}
