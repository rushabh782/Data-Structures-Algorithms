/*A sample program demonstrating working of global variable*/
#include<stdio.h>
int n = 1000;
int main()
{
	void sample();//fn prototype declaration
	printf("Value of n = %d\n",n);
	sample();//calling the fn
}
void sample()
{
	void check();//fn prototype of check fn
	printf("Value of n = %d\n",n);
	check();//calling check()
}
void check()
{
	printf("Value of n = %d\n",n);
}
