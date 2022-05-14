#include<stdio.h>
void main()
{
	int ram,shyam,budh;
	printf("%d %d %d",&ram,&shyam,&budh);
	
	if(ram<=shyam && ram<=budh )
	{
		printf(" ram is youngest");
	}
	
		if(shyam <= ram && budh<= ram )
	{
		printf(" shyam is youngest");
	}
	
		if(budh <= shyam && budh <=ram )
		printf("budh ");
	{
		printf(" budh is youngest");
	}
}
