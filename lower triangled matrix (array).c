/* WRITE A C PROGRAME TO PRINT WHETHER THE MATRIX IS LOWER TRIANGLED MATRIX OR NOT
1 0 0
4 5 0
7 8 9 */

#include<stdio.h>
int main()
{
	int lt[3][3],i,j,flag=1;
	printf("\nEnter the elements of matrix");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&lt[i][j]);
		}
	}
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if((i<j&&lt[i][j]!=0) || (j<=i&&lt[i][j]==0))
			{
				flag=0;
				break;
			}
		}
	}
	
	if(flag==1)
	printf("\nThe matrix is a lower triangled matrix");
	else
	printf("\nThe matrix is not a lower triangled matrix");
	
	return 0;
}
