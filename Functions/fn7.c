/*Write a program that reads a number and passes it to a function. 
The called function checks whether the number is divisible by 6 or not.
Note that “Divisible by 6” or “Not divisible by 6” should be displayed in the calling 
function only and not in the called one.*/
#include<stdio.h>
int main()
{
	int num;
	char ch;
	char divby6(int);//prototype declaration
	printf("Enter the number");
	scanf("%d",&num);
	ch = divby6(num);//calling the fn by passing number num
	if(ch == 'y')
	printf("Divisible by 6");
	else
	("Not divisible by 6");
}
//following is the definition (body) of called fn divby6()
char divby6(int val)
{
	if(val%6 == 0)
	return 'y';
	else 
	return 'n';
}
