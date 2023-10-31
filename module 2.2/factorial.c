// to print factorial of given number
#include<stdio.h>
main(){
	int i,res=1,n=5;
	for(i=1;i<=n;i++)
	{
		res=res*i;
	}
	printf("factorial = %d ",res);
}
