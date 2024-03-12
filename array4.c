/*WAP to find smallest as well as second smallest in float 1-D array*/
#include<stdio.h>
int main()
{
	float num[10];
	float smallest,sec_smallest;
	int c;
	for(c=0;c<10;++c)
	{
		printf("num[%d] = ",c);
		scanf("%f",&num[c]);
	}
	smallest = num[0];
	for(c=1;c<10;++c)
	{
		if(num[c]<smallest)
		smallest = num[c];
	}
	printf("Smallest = %.2f",smallest);
	getch();
	
	if(smallest==num[0])
	sec_smallest=num[1];
	else
	sec_smallest = num[0];//first smallest
	for(c=1;c<10;++c)
	{
		if(num[c]<sec_smallest && num[c]!=smallest)
		sec_smallest = num[c];//second smallest
	}
	printf("Smallest element = %.2f\nsecond smallest=%.2f",smallest,sec_smallest);
}
