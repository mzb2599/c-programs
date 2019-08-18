#include <stdio.h>
#include<conio.h>
int main()
 { 
  int n,num1,num2,result;
  printf("What operation do u want to do?\n");
  printf("Press 1 for addition\n");
  printf("Press 2 for subtraction\n");
  printf("Press 3 for multiplication\n");
  printf("Press 4 for division\n");
  scanf("%d",&n);
  printf("Enter a number\n");
  scanf("%d",&num1);
  printf("Enter second number\n");
  scanf("%d",&num2);
  do
  {
   switch(n)
  {
	case 1:result=num1+num2;
		   printf("Addition of two numbers is = %d",result);
		   break;
	case 2:result=num1-num2;
		   printf("Subtraction of two numbers is = %d",result);
		   break;
	case 3:result=num1*num2;
	   	   printf("Multiplication of two numbers is = %d",result);
	 	   break;
	case 4:result=num1/num2;
		   printf("Division of two numbers is = %d",result);
		   break;
 }
 }while(c!=5);
 getch();
 }
