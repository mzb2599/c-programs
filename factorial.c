#include<stdio.h>
#include<conio.h>
int main(int argc, char const *argv[])
{
     int i=1,factorial=1,number;
          printf("Enter a number");
          scanf("%d",&number);
          while(i<=number)
          {
              factorial=factorial*i;
              i++;
          }
          printf("%d!=%d",number,factorial);
    return 0;
}
