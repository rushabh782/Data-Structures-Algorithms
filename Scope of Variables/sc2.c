          /*Sample program to show working of local variables*/
#include<stdio.h>
int main()
{
	int n = 200;
	void sample();//function prototype
	sample();//calling the fn
	printf("Value of n = %d",n);
}

void sample()
{
	int n = 100;
	printf("Value of n = %d\n",n);
}//end of definition(body) of function sample()
