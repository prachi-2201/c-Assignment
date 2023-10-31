#include<stdio.h>
main()
{
	int i,len;
	char str[10];
	printf("enter string :\n");
	scanf("%s",&str);
	len=strlen(str)-1;
	for(i=len;i>=0;i--)
	{
		printf("%d",i);
		printf(" %s",str[i]);
	}
}
