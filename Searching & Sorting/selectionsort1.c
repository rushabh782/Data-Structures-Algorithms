/*Write a program that reads sales of MX number of salespersons in an array. 
Now display all the sales amounts in descending order. Use Selection sort logic.*/
#include<stdio.h>
#define MX 10
int main()
{
	int sales[MX],i,j,temp;
	//reading the array elements
	for(i=0;i<MX;++i)
	{
		printf("sales[%d]=",i);
		scanf("%d",&sales[i]);
	}
	
	for(i=0;i<MX-1;++i)   //outer loop for passes 
	{
		for(j=i+1;j<MX;++j)    //inner loop for comparisions
		{
			if(sales[i]<sales[j])
			{
				temp = sales[i];
				sales[i] = sales[j];
				sales[j] = temp;
			}//end of if
		} //end of inner loop
	} //end of outer loop
	
	//printing sorted array(descending order)
	for(i=0;i<MX;++i)
	printf("sales[%d]=%d\n",i,sales[i]);
}


