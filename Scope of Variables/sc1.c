            /*Sample program to show working of local variable*/
#include<stdio.h>
int main()
{
	void sample();//Function prototype
	sample();
	//printf("Value of n = %d",n);//error
}

                /*following is the definition of function sample()*/
void sample()
{
	int n = 100;
	printf("Value of n = %d",n);
}//end of definition(body) of function sample() 
