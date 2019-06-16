//write a programme to create  structure of type Employ where employ has employ ID and salary.Accept value of n employs and display it on the screen.
#include<stdio.h>
#include<conio.h>
struct Employ 
{
	int id;
	float salary;
};
int main()
{
	struct Employ E[20];
	int n,i;
	printf("Enter the number of employees");
	scanf("%d",&n);
	for(i=1;i<=n;i++) 
	{
	 printf("Enter your id");
     scanf("%d",&E[i].id);
     printf("\nEnter your salary");
     scanf("%f",&E[i].salary);
    }
	 printf("\nid\tsalary\n");
	 for(i=1;i<=n;i++)
	 {
	  printf("%d\t%f",E[i].id,E[i].salary);
	  printf("\n");
	 }
	 return 0;
	
}
