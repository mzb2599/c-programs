#include<stdio.h>
#include<conio.h>
struct employee
{
	char name[50];
	int id,salary;
};
void main()
{
	struct employee E[100];
	int i,n,c=0;
	printf("Enter the number of employees");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		
		printf("Enter the employees name,id,salary\n");
		scanf("%s%d%d",E[i].name,&E[i].id,&E[i].salary);
	}
	printf(" employees\n");
	for(i=0;i<n;i++)
	{
		if(E[i].salary>10000)
		{
		printf("\n\tname\tid\tsalary\n");
		printf("\t%s\t%d\t%d\n",E[i].name,E[i].id,E[i].salary);
		c++;
		}
	}
	if(c==0)
	printf("No employees with salary greater than 10000");
}
