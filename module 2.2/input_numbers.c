#include<stdio.h>
main(){
	int num[9],i,even=0,odd=0,sum_even=0,sum_odd=0;
	for(i=0;i<=9;i++)
	{
		printf("enter number at index %d ",i);
		scanf("%d",&num[i]);
		if(num[i]%2==0)
		{
			sum_even+=num[i];
			even++;
		}
		else
		{
			sum_odd+=num[i];
			odd++;
		}
	}
	printf("\n even numbers : %d ",even);
	printf("\n odd numbers : %d ",odd);
	printf("\n sum of even numbers : %d ",sum_even);
	printf("\n sum of odd : %d ",sum_odd);
}
