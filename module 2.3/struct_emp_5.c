//Write a program of structure for five employee that provides the following information -print and display empno, empname, address and age
#include<stdio.h>
#include<string.h>
struct employee
{
	int empno,age;
	char empname[20],address[50];
}emp[5];

main()
{
	int i;
	for(i=1;i<=5;i++)
	{
		printf("\n\n Enter the empno of employee%d: ",i);
		scanf("%d",&emp[i].empno);
		printf("\n\n Enter the name of employee%d: ",i);
		scanf(" %s",emp[i].empname);
		printf("\n\n Enter the address of the employee%d : ",i);
		scanf(" %[^\n]",&emp[i].address);
		printf("\n\n Enter the age of employee%d: ",i);
		scanf("%d",&emp[i].age);
		printf("\n**************************");
	}
	for(i=1;i<=5;i++)
	{
	printf("\n\n empno : %d",emp[i].empno);
	printf("\n\n Emplyoee name : %s",emp[i].empname);
	printf("\n\n address : %s",emp[i].address);
	printf("\n\n age : %d",emp[i].age);
	printf("\n**************************");
	}
}



