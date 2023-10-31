//WAP to convert years into days and days into years
#include <stdio.h>
main(){
	int days,years,to_years,to_days;
	printf("\n\n Enter days to convert into years :");
	scanf("%d",&days);
	to_years=days/365;
	printf("\n Years = %d",to_years);
	printf("\n\n Enter years to convert into days :");
	scanf("%d",&years);
	to_days=years*365;
	printf("\n days = %d",to_days);
}
