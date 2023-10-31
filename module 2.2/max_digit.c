#include <stdio.h>
main()
{
	int n=56843,rem,max=0;
	while(n>0)
	{
		rem=n%10;
		if(rem>max)
		{
			max=rem;
		}
		n=n/10;
	}
	printf(" Max = %d",max);
}
