//WAP to find simple interest
#include <stdio.h>
main(){
	int amt,time;
	float rate,interest;
	printf("\n Enter amount for interest :");
	scanf("%d",&amt);
	printf("\n Enter rate of interest :");
	scanf("%f",&rate);
	printf("\n Enter time period in years :");
	scanf("%d",&time);
	interest = (amt*rate*time)/100;
	printf("\n\n Total interest : %f",interest);
}
