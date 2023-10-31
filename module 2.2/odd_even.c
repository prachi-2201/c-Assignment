//WAP to find number is even or odd using ternary operator
#include <stdio.h>
main(){
	int num;
	printf("\n Enter number to find number is even or odd : ");
	scanf("%d",&num);
	(num%2==0)?printf("number is even"):printf("number is odd");
}
