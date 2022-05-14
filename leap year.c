#include<stdio.h>
main()
{
	int y;
	printf("enter the anu year");
	scanf("%d",&y);
	
	if(y%100==0)
	{
		if(y%400==0)
		
			printf( "yes: this is leap year");
		       else 
		       printf(" this not leap year");
	}
	else
	{
	if(y%4==0)
	printf("yes: this is leap year4");
	else
	printf("no: this is leap year4");
	}
}
	
