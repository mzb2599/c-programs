#include<stdio.h>
#include<conio.h>
int a,c,l,b;
void main()
{
 printf("enter the length\n");
	scanf("%d",&l);
 printf("Enter the breadth\n");
 	scanf("%d",&b);
 a=l*b;
 c=2*l+2*b;
 printf("area=%d\nperimeter=%d",a,c);   
 getch();
 } 
