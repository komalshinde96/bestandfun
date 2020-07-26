#include<stdio.h>
struct Employee
{
	char Name[25];
	int Age;
	int Phn_no;
	long Salary;
};
void main()
{
	int i;
	struct Employee Emp[3];
	for(i=0;i<3;i++)
	{
		printf("\n\tEnter Name: ");
		scanf("%s",&Emp[i].Name);
		printf("\n\tEnter Age: ");
		scanf("%d",&Emp[i].Age);
		printf("\n\tEnter Phn_no: ");
		scanf("%d",&Emp[i].Phn_no);
		printf("\n\tEnter Salary: ");
		scanf("%d",&Emp[i].Salary);
	}
	printf("\nDetails of Employees");
	for(i=0;i<3;i++)
	printf("\n%s\t%d\t%d\t%d",Emp[i].Name,Emp[i].Age,Emp[i].Phn_no,Emp[i].Salary);
}
