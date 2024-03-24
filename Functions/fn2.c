/*WAP that reads a number & passes it to function that calculates and return 
it's factorial*/
#include<stdio.h>
int main()
{
	int num;
	long fct;
	long calcfct(int);//prototype declaration
	printf("Enter the number");
	scanf("%d",&num);
	fct = calcfct(num);//calling the function by passing num
	printf("Factorial of %d = %ld",num,fct);	
}
     /*Following is the definition(body) of fn calcfct()*/
	      long calcfct(int num)
	      {
	      	long f = 1;
	      	while(num>=2)
	      	{
	      		f = f * num;
	      		--num;
			  }
			  return f;
		  }
