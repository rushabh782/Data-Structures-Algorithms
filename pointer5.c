/*WAP that illustrats "An array name is pointer to base address"*/
#include<stdio.h>
int main()
{
	int arr[] = {100,200,900};
	printf("Base Address=%u\n",arr);
	printf("Address of second element arr[1]=%u\n",arr+1);
	printf("Address of third element arr[2]=%u\n",arr+2);
	printf("Value of first element = %d\n",*arr);//100
	printf("Value of second element = %d\n",*(arr+1));//200
	printf("Value of third element = %d\n",*(arr+2));//900
}
