#include<stdio.h>
void main()
{
	int i,n;
	int a[10];
	void ascending(int a[],int n);
	printf("Enter the 5 elements of array");
	for(i=0;i<=4;i++)
	{
		scanf("%d",&a[i]);
	}
	ascending(a,5);
}
	void ascending(int a[],int n)
	{
		int i,j,t;
		for(i=0;i<n-1;i++)
		{
			for(j=0;j<n-1;j++)
			{
				if(a[j]>a[j+1])
				{
					t=a[j];
					a[j]=a[j+1];
					a[j+1]=t;
				}
			}
		 } 
		 printf("after sorting\n");
		 for(i=0;i<n;i++)
		 {
		 	printf("%d\n",a[i]);
		 }
	}
	

