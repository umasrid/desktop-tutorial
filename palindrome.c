/* WRITE A C PROGRAMME TO PRINT WHETHER THE GIVEN NUMBER IS PALINDROM OR NOT */


#include<stdio.h>
int main()
{
	int num,rev=0,rem,temp;
	printf("enter any positive number");
	scanf ("%d",&num);
	temp=num;
	while(num != 0)
	{
		rem = num % 10;
		rev = rev*10+rem;
		num = num/10;
	}
	if(temp==rev)
	     printf("the given positive number is a palindrome %d",temp);
	else
	     printf("the given positive number is not  a palindrome %d",temp);
}




