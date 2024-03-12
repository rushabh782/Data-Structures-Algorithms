/*WAP that reads the size of an array from user.Now read array elements from user and 
print the highest value*/

#include<stdio.h>
int main()
{
	int n,count;
	float biggest;
	printf("Enter the size of the array ");
	scanf("%d",&n);
	float values[n];
	
	for(count=0;count<n;++count)
	{
		printf("values[%d]",count);
		scanf("%f",&values[count]);
	}//end of loop block
	
	biggest = values[0];
	for(count=1;count<n;++count)
	{
		if(values[count]>biggest)
		{
			biggest = values[count];
		}//end of if block
	}//end of loop block
	
	printf("Biggest value = %.2f",biggest);
}


