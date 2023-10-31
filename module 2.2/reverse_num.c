#include <stdio.h>
main()
{
	int n=12345,rem;
	while(n>0)
	{
		rem=n%10;
		printf("%d",rem);
		n=n/10;
	}
}
