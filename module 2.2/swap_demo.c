//WAP to swap two numbers without using third variable
#include <stdio.h>
main(){
	int num1,num2;
	printf("\n\n Enter two number to swap :");
	printf("\n Number 1 : ");
	scanf("%d",&num1);
	printf("\n Number 2 : ");
	scanf("%d",&num2);
	num1=num1+num2;
	num2=num1-num2;
	num1=num1-num2;
	printf("\n\n number 1 = %d \n\n number 2 = %d",num1,num2);
}
