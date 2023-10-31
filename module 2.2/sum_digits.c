//Write a program make a summation of given number (E.g., 1523 Ans: -11)
#include <stdio.h>
main()
{
	int n=123,rem,sum=0;
	while(n>0)
	{
		rem=n%10;
		sum+=rem;
		n=n/10;
	}
	printf("%d",sum);
}
