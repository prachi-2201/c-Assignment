#include<stdio.h>
main(){
	int a,b,res;
	char op;
	printf("\n\n\t Enter a number : ");
	scanf("%d",&a);
	printf("\n\n\t Enter a number : ");
	scanf("%d",&b);
	printf("\n\n\t ................Operations...............");
	printf("\n\n\t +. Addition");
	printf("\n\n\t -. Substraction");
	printf("\n\n\t *. Multiplication");
	printf("\n\n\t /. Division");
	printf("\n\n\t .........................................");
	printf("\n\n\t Enter a operator : ");
	scanf(" %c",&op);
	switch (op) {
		case '+':
			res=a+b;
			printf("\n\n\t %d",res);
			break;
		case '-':
			res=a-b;
			printf("\n\n\t %d",res);
			break;
		case '*':
			res=a*b;
			printf("\n\n\t %d",res);
			break;
		case '/':
			res=a/b;
			printf("\n\n\t %d",res);
			break;
		default:
			printf("invalid choice");
			break;
	}
}
