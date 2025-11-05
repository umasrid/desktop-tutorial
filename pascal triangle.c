/* WRRITE A C PROGRAMME TO PRINT PASCAL TRIANGLE */

#include<stdio.h>
#include<math.h>

int main()

{
	int i,j,rows,val;
	printf(" enter the no.of rows ");
	scanf("%d",&rows);
	for(i=0;i<rows;i++)
	{
		for(j=0;j<rows-i;j++)
		printf("  ");
		val=1;
		for(j=0;j<=i;j++)
		{
			printf("%4d",val);
			val=val*(i-j)/(j+1);
		}
		printf("\n");
	}
}











