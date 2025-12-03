/* WRITE A C PROGRAMME TO PERFORM MULTIPLICATION OF TWO MATRICES*/
#include<stdio.h>
int main()
{
	int a[2][2],b[2][3],c[2][3],i,j,k;
	
	printf("ENTER THE ELEMENTS OF MATRIX A");
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("/nENTER THE ELEMENTS OF MATRIX B ");
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	
    printf("/nTHE RESULT OF MATRIX C IS ");
    
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			c[i][j]=0;
			for(k=0;k<2;k++)
			{
				c[i][j]=c[i][j]+a[i][k]*b[k][j];
			}
			
			printf("%d ",c[i][j]);
		}
		
		printf("\n");
	}	
}
















