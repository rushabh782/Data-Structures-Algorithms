/*Write a program that searches for multiple occurrences of a value. 
It should print all the locations where that value is present.
 Print number of occurrences also. */
 
#include<stdio.h>
#define MX 10//define constant MX

int main()
{
	int arr[MX],val,i,occ=0;
	for(i=0;i<MX;++i)
	{
		printf("arr[%d]=",i);
		scanf("%d",&arr[i]);
	}
	printf("Enter the value to be searched");
	scanf("%d",&val);
	
	for(i=0;i<MX;++i)
	{
		if(val == arr[i])
		{
			printf("Found at location number %d\n",i+1);
			occ++;
		}//end of if
	}//end of loop
	if(occ==0)
	printf("No such value exists in the array");
	else
	printf("No of occurences=%d",occ);
}
