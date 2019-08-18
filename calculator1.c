#include<stdio.h>
#include<conio.h>
void main()
{    
int a,b,sum,diff,choice,n,mod;
float mul,div;
do
{
printf("Enter the first number\n");
scanf("%d",&a);
printf("Enter the second number\n");
scanf("%d",&b);
printf("Enter the operation\n press\n 1 for addition\n 2 for subtraction\n 3 for multiplication\n4 for division\n5 for modulus(get remainder after dividing)");
scanf("%d",&n);
switch(n)
{
	case 1:sum=a+b;
	       printf("%d+%d=%d",a,b,sum);
	       break;
	
	case 2:diff=a-b;
	       printf("%d-%d=%d",a,b,diff);
	       break;
	
	case 3:mul=a*b;
	      printf("%d*%d=%f",a,b,mul);
	      break;
	
	case 4:div=(float)a/b;
	      printf("%d/%d=%f",a,b,div);
		  break;	
	
	case 5:mod=a%b;
	      printf("%d mod %d=%d",a,b,mod);
	      break;
	      
	default:printf("Invalid input");      
}
printf("\nEnter 1 to continue or 0 to exit");
scanf("%d",&choice);
}
while(choice==1);
getch();
}

