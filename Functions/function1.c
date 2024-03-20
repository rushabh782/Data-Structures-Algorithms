/*Functions - WAP that reads 3 variables & passes them to fn that calls & returns 
their sum*/
#include<stdio.h>
int main()
{
	int a,b,c,sum;
	int sumfnc(int,int,int);//fn prototype (fn declaration)
	printf("Enter the values of a,b & c");
	scanf("%d%d%d",&a,&b,&c);
	sum = sumfnc(a,b,c);//calling the fn by passing 3 arguments
	printf("Sum=%d",sum);
}
//foll is defn of function sumfnc()
int sumfnc(int a1,int b1,int c1)
{
	int tot;
	tot = a1+b1+c1;
	return tot;
}
