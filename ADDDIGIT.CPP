#include<stdio.h>
#include<conio.h>

void main()
{
int n,rem,sum=0;
clrscr();
printf("Enter digits\n");
scanf("%d",&n);

while(n!=0)
{
rem=n%10;
sum=sum+rem;

n=n/10;
}

printf("Sum of digits is %d",sum);

getch();
}