#include <stdio.h>
main()
{
	int n=7507,ld,fd;
	ld=n%10;
	while(n>0)
	{
		fd=n%10;
		n=n/10;
	}
	printf(" \n\t Sum = %d ",ld+fd);
}
