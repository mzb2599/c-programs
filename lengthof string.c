//wap to accept a string and find its length without using a string header file//
#include<stdio.h>
void main()
{
	char name[20];
	int length=0;
	printf("Enter your name");
	gets(name);
	while(name[length]!='\0')
	{
		length++;
	}
	printf("length of string =%d",length);
}
