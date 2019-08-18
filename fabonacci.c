#include <stdio.h>
#include<conio.h>
void main()
{
	int n1,n2,i,result,n;
	printf("Enter the number of elements in Fabonacci series");
	scanf("%d",&n);//Accepting nimber of elementd
	printf("%d\t%d\t",n1,n2);
	for(i=0;i<=n;i++)//To print the elements
	{
		result=n1+n2; 
		printf("%d\t",result);
		n1=n2;
		n2=result;
	}
}
