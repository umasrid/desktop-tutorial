/*write a C programme to perform bitwise operaters*/
#include<stdio.h>

int main()
{
	int a,b;
	printf("enter any two integers numbers");
	scanf("%d%d",&a,&b);
	
	printf("\nbitwise operation of %d & %d = %d",a,b,a&b);
	printf("\nbitwise operation of %d | %d = %d",a,b,a|b);
	printf("\nbitwise operation of %d ^ %d = %d",a,b,a^b);
	printf("\nbitwise operation of %d << %d = %d",a,b,a<<b);
	printf("\nbitwise operation of %d >> %d = %d",a,b,a>>b);
	return 0;
}
