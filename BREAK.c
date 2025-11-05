/*write a C programme using break statements*/
#include<stdio.h>
int main()
{
	int i;
	i=1;
	while(i<=10)
	{
		if(i==8)
		break;
		printf("%d\n",i);
		i=i+1;
	}
	printf("\n THANKING YOU");
}



