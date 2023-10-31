//WAP of Addition, Subtraction, Multiplication and Division using Switch case.(Must Be Menu Driven)
#include<stdio.h>
main()
{
	int num1,num2,res,op;
	printf("\n\t Enter number 1 :");
	scanf("%d",&num1);
	printf("\n\t Enter number 2 :");
	scanf("%d",&num2);
	do{
		printf("-----------------********---------------------");
		printf("\n\t Enter your choice \n\t 1.Addition \n\t 2.Substraction \n\t 3.Multiplication \n\t 4.Division \n\t 5.Exit \n");
		printf("-----------------********---------------------\n\t");
		scanf(" %d",&op);
	
		switch(op)
		{
			
			case 1:res=num1+num2;
					printf("\n\t ADDITION = %d \n",res);
					break;
			case 2:res=num1-num2;
					printf("\n\t SUBSTRACTION = %d \n",res);
					break;
			case 3:res=num1*num2;
					printf("\n\t MULTIPLICATION = %d \n",res);
					break;
			case 4:res=num1/num2;
					printf("\n\t DIVISION = %d \n",res);
					break;
			case 5:break;
			default:printf("\n\t INVALID CHOICE \n");
					break;
			
		}
	}while(op!=5);
}
