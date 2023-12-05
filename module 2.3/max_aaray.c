//Write a program to find out the max number from given array using function
#include<stdio.h>
main()
{
	int i,size,a[20],max;
	printf("\n\n Enter the size of array you want :");
	scanf("%d",&size);
	for(i=0;i<size;i++)
	{
		printf("\n a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	
	max=a[0];
	for(i=0;i<size;i++)
	{
		if(max<a[i])
		{
			max=a[i];
		}
	}
	
	printf("\n\n Maximum number from the array is : %d",max);
	
}
