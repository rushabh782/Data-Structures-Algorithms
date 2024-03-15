#include<stdio.h>
int main()
{
	int arr[10],i,j,temp;
	for(i=0;i<10;++i)
	{
		printf("arr[%d]=",i);
		scanf("%d",&arr[i]);
	}
	//printing logic for bubble sort
	for(i=0;i<9;++i)//outer loop for passes
	{
		for(j=0;j<(9-i);++j)//inner loop for comparisions
		{
			if(arr[j]>arr[j+1])
		  {	
			temp=arr[j];
			arr[j]=arr[j+1];
			arr[j+1]=temp;
		  }//end of if block
    }//end of inner loop
  }//end of outer loop
  
  for(i=0;i<10;++i)
  printf("%d\t",arr[i]);
}
