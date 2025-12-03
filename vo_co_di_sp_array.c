/*WRITE A C PROGRAMME TO FIND THE NO.OF VOWELS,NO.OF CONSONANTS,NO.OF DIGITS,NO.OF 
SPACES IN A GIVEN SENTENCE */
#include<stdio.h>
int main()
{
	int v=0,c=0,d=0,s=0,i;
	char sen[20];
	
	printf("\n ENTER THE SENTENCE ");
	scanf("%[^\n]",sen);
	
	for(i=0;sen[i]!='\0';i++)
	{
		if(sen[i]=='a' || sen[i]=='e' || sen[i]=='i' || sen[i]=='o' || sen[i]=='u')
		    v++;
		else if(sen[i]>='a' && sen[i]<='z')
		    c++;
		else if(sen[i]>='0' && sen[i]<='9')  
		    d++;
		else if(sen[i]>=' ')
		    s++;
	}
	printf("\n Vowels %d,Consonants %d,digits %d,spaces %d ",v,c,d,s);
}
























