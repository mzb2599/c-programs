#include<stdio.h.>
void main()
{
	int n1,n2;
	void swap(int *p1,int *p2);
	printf("Enter the no\n");
	scanf("%d",&n1);
	printf("Enter the no\n");
	scanf("%d",&n2);
	printf("\nBefore swapping in main n1=%d,n2=%d",n1,n2);
	swap(&n1,&n2);
	printf("\nAfter swapping in main n1=%d,n2=%d",n1,n2);
}
void swap(int *p1,int *p2)
{
	int t;
	t=*p1;
	*p1=*p2;
	*p2=t;
	printf("\nAfter swapping in swap n1=%d,n2=%d",*p1,*p2);
}
