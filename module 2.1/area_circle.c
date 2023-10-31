// Area of circle float values demo
#include <stdio.h>
main(){
	int r;
	float pi=3.14,area;
	printf("\n\n Enter radius of circle : ");
	scanf("%d",&r);
	area=pi*(r*r);
	printf("\n\n Area of circle = %.2f",area);
}
