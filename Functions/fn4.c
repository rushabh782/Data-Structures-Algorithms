#include<stdio.h>
int main()
{
	void getreverse(long);//fn prototype declaration
	long num;
	printf("Enter the number");
	scanf("%ld",&num);
	getreverse(num);//calling the fn by passing num
	printf("\nLearning is fun");
}
void getreverse(long num1)
{
	int r;
	while(num1!=0)
	{
		r = num1%10;
		printf("%d",r);
		num1 = num1/10;
	}
}
