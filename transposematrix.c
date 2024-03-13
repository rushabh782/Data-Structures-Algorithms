/*Write a program that declares and initializes a matrix.
 Pass this matrix to a function that stores the transpose of this matrix into another matrix.
  Display the resultant matrix.*/
  
#include<stdio.h>

void transpose(int x[][3])
{
	int y[3][3],i,j;//declaration of o/p arr
	for(i=0;i<3;++i)
	{
		for(j=0;j<3;++j)
		{
			y[i][j] = x[j][i];
		}
	}

	
	//Print o/p matrix
	for(i=0;i<3;++i)
	{
		for(j=0;j<3;++j)
		{
			printf("%d\t",y[i][j]);
		}
		printf("\n");
	}
}
	int main()
	{
		/*initialization of i/p matrix*/
		int arr[][3]={
		{1,2,3},
		{3,4,5},
		{5,6,7}
		};
		transpose(arr);
	}

