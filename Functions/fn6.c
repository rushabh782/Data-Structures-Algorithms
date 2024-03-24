/*Write a program that reads temperatures of three consecutive days 
and passes them to a function. The called function should print which day 
had minimum temperature. Do not return any value .*/
#include<stdio.h>
int main()
{
	float temp1,temp2,temp3;
	void mintemp(float,float,float);//function prototype 
	printf("Enter the temperature of 3 consecutive days");
	scanf("%f%f%f",&temp1,&temp2,&temp3);
	mintemp(temp1,temp2,temp3);
}
//following is the definition of function mintemp()
void mintemp(float t1,float t2,float t3)
{
	if(t1<t2)//if first day temp is less than second day
	if(t1<t3)
	printf("First day had minimum temperature");
	else
	printf("Third day had minimum temperature");
	else
	if(t2<t3)
	printf("Second day had minimum temperature");
	else
	printf("Third day had minimum temperature");
}
