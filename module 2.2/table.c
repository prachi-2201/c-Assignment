//to print table up to given numbers
#include<stdio.h>
main(){
	int num,i;
	printf("\n\n Enter a number : ");
	scanf("%d",&num);
	for(i=1;i<=10;i++)
	{
		printf("\n\n\t %d * %d = %d ",num,i,num*i);
	}
}
