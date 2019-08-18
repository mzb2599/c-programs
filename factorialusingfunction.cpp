#include<stdio.h>
int fact(int);
int main()
{
	int fact(int no);
	int number,factorial;
	printf("Enter a number\n");
	scanf("%d",&number);
	factorial=fact(number);
	printf("factorial of %d is %d",number,factorial);
	return 0;
}
int fact(int no)
{
	if (no==1)
	{
	 return 1;
	}
	else
	{
		return(no *fact(no-1));
	}
}
	
