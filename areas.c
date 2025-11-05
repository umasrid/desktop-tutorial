/*write a C programme to calculate the area circle,triangle,square,rectangle*/
#include<stdio.h>
#include<math.h>
int main()
{
	int r,b,h,a,len,bre,hei,area2,area3,area4;
	float area1;
	
	printf("enter radius");
	scanf("%d",&r);
	area1=3.145*r*r;
	printf("AREA OF CIRCLE IS %f",area1);
	
	
	printf("\nenter breadth and height");
	scanf("%d%d",&b,&h);
	area2=1/2*b*h;
	printf("AREA OF TRIANGLE IS %d",area2);
	
	
	printf("\nenter side lenght");
	scanf("%d",&a);
	area3=a*a;
	printf("AREA OF SQUARE IS %d",area3);
	
	
	printf("\nenter breadth,height,lenght");
	scanf("%d%d%d",&bre,&hei,&len);
	area4=len*bre*hei;
	printf("AREA OF RECTANGLE IS %d",area4);
}








