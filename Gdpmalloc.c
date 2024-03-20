/*Write a program asks from the user number of countries. Then declare an array 
called GDP with as much size.Now read and print the
 Gross Domestic Products of the countries.*/
 
#include<stdio.h>
#include<stdlib.h>//required for exit function
int main()
{
	int n,i;
	long double *GDP;
	printf("Enter the number of countries");
	scanf("%d",&n);
	GDP = (long double *)malloc(sizeof(long double)*n);//allocating space dynamically to GDP arr
	if(GDP==NULL)
	{
		printf("Dynamic memory allocation resulted into failure....exiting");
		exit(0);
	}
	//Using loop to read GDP's n number of countries
	for(i=0;i<n;++i)
	{
		printf("Enter the GDP of country number %d",i+1);
		scanf("%Lf",&GDP[i]);
	}
	//loop printing GDP of countries
	for(i=0;i<n;++i)
	printf("\nGDP of country number %d is %.2Lf",i+1,GDP[i]);
}
