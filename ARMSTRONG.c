/* Write a c programme to check whether the given number is armstrong number
or not */

#include<stdio.h>
#include<math.h>

int main() 
{
	int n,r,s=0,t,o,l;
	
	printf("Enter any positive number");
	scanf("%d",&n);
	
	t = n;
	o = n;
	 
	while(n != 0)
	{
		r = n % 10;
	    l++; 
		n = n / 10;
	}
	
	while(t != 0)
	{
		r = t % 10;
	    s = s + pow(r,l);
		t = t / 10;
	}
	if(s==o)
      	printf("Given number is armstrong number %d",o);
	else
	    printf("Given number is not armstrong number %d",o);
 } 
 
 
 
 
 
 
 
 
 
 
