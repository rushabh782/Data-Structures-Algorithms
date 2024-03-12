/*WAP that reads values into element of 2D array & print them*/
#include<stdio.h>
int main()
{
	int scores[3][3],i,j;
	/*reading values into arr*/
	for(i=0;i<3;++i)
	{
		for(j=0;j<3;++j)
		{
			printf("scores[%d][%d]=",i,j);
			scanf("%d",&scores[i][j]);
		}
	}
	/*printing values into matrix form*/
	for(i=0;i<3;++i)
	{
		for(j=0;j<3;++j)
		{
			printf("%d\t",scores[i][j]);
		}
		printf("\n");
	}
}
