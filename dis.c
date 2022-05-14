#include<stdio.h>
int main()
{
	int qty,dis;
	float rate,total;
	
	printf("enter the rate quntity\n");
	scanf("%f %d",&rate,&qty);
	
	if(qty > 999)
	{
		dis =(qty*rate) *10 / 100;
	}
	else
	{
		dis=0;
	}
	
	total=(rate*qty)-dis;
	
	printf("total paid is rs %f\n",total);
	
	
}
