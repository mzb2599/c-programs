#include <stdio.h>
#include<conio.h>
int n;
void main()
 { 
printf("Enter the year=");
scanf("%d",&n);
(n%4==0)&&(n%100!=0)||(n%400==0) ? printf("It is a leap year") : printf(" It is not a leap year");
getch();
}
