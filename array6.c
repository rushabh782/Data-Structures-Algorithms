/*WAP on matrix addition*/
#include<stdio.h>
int main()
{
	int a[][3]={
	{1,2,3},
	{4,5,6},
	{7,8,9}
	};
	int b[][3]={
	{1,7,8},
	{2,3,4},
	{1,2,3}
	};
	int c[3][3],i,j;
	
	for(i=0;i<3;++i)
	{
		for(j=0;j<3;++j)
		{
			c[i][j] = a[i][j] + b[i][j];
		}
	}
	//print resultant matrix
	for(i=0;i<3;++i)
	{
		for(j=0;j<3;++j)
		{
			printf("%d\t",c[i][j]);
		}
		printf("\n");
	}
}
