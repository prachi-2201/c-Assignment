//WAP Find out length of string without using inbuilt function
#include<stdio.h>
main()
{
	char str[10];
	int i,length=0;
	
	printf("\n\n Enter the string :");
	scanf("%s",&str);
	
	printf("\n\n String is %s : ",str);
	
	for(i=0;str[i]!='\0';i++)
	{

		length++;
		
	}
	printf("\n\n Length of the string is %d ",length);
}
