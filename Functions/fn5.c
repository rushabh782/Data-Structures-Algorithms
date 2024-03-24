#include<stdio.h>
void display()
{
	int a = 0;
	while(a<255)
	{
		printf("[%d] = [%c]",a,a);
		a++;
	}
}
int main()
{
	display();//calling the function
}

