#include<stdio.h>
#include<conio.h>
main()
{       int age;
	clrscr();
	printf("enter your age=");
	scanf("%d",&age);
	if(age<18 && age>0)
	{
		printf("you are not eligebal for voting process");
	}
	else if(age=18)
	{
		printf("you are also eligebal for voting process");
	}
	else if(age>18)
	{
		printf("you are eligebal for voting process");
	}
	else
	{
		printf("plze enter corect age!");
	}
	getch();
}