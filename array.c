#include<stdio.h>
int main()
{
	float tmp[10];
	int n = 0;
	while(n<10)
	{
		printf("Enter temperature of day %d ",n+1);
		scanf("%f",&tmp[10]);
		++n;
	}
	n=0;
	while(n<10)
	{
		printf("Temperature of day%d=%.2f\n",n+1,tmp[n]);
		++n;
	}
}
