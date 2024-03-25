#include<stdio.h>
int n = 1000;
int main()
{
	void sample();//fn prototype
	printf("Value of n in main() = %d\n",n);
	sample();//calling the fn
	printf("Value of n in main() = %d\n",n);
}
void sample()
{
	void check();//fn prototype of check() fn
	printf("Value of n in sample() = %d\n",n);
	check();
	printf("Value of n in sample() = %d\n",n);
}
void check()
{
	printf("Value of n in check = %d\n",n);
	n += 500;
	printf("Value of n in check = %d\n",n);
}


