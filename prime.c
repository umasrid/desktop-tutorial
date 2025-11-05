/* WRITE A C PROGRAMME TO CHECK WHETHER THE GIVEN NUMBER IS PRIME NUMBER
 (OR) NOT*/
 
#include<stdio.h>
 int main()
 {
 	int n,c,i;
 
 	printf("enter any positive number");
 	scanf("%d",&n);
 	
 	for(i=1;i<=n;i++)
 	{
 		if(n%i==0)
 		    c++;
	 }
	 
	if(c==2)
	   printf("given positive number is prime %d",n);
	else   
	   printf("given positive number is not prime %d",n);
 }
 
 
 
 
 
 
 
 
 
 
