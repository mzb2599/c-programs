#include<stdio.h>
void main()
{
	int a[25][25],i,j,m,n;
	void transpose(int a[25][25],int m,int n);
	printf("Enter the rows and columns");
	scanf("%d%d",&m,&n);
	printf("Enter the elements");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
transpose(a,m,n);
getch();
}
void transpose(int a[25][25],int m,int n)
{
	int i,j;
	int b[10][10];
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			b[j][i]=a[i][j];
		}
	}
		for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
	    printf("%d\t",b[i][j]);
	    }
		printf("\n");
	}
getch();
}
