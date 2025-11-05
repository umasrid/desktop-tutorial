/* write a c programme to convert fahrenheit to celsius and celsius
to fahrenheit*/
#include<stdio.h>

int main()
{
	float a,b,cl,fh;
	printf("enter fahrenheit value");
	scanf("%f",&b);
	cl=(b-32.0)*(5.0/9.0);
	printf("celsius value is %f\n",cl);
	
	
	printf("enter celsius value");
	scanf("%f",&a);
	fh=a*(9.0/5.0)+32;
	printf("fahrenheit value is %f\n",fh);
	return 0;
}
