
/* WAP for selection sort*/

#include<stdio.h>
int main()
{
	int arr[10],i,j,temp;
	for(i=0;i<10;++i){    //reading arr elements
	scanf("%d",&arr[i]);
}
	//selection sort logic
	for(i=0;i<9;++i){               //outer loop for passes
		for(j=i+1;j<10;++j){         //inner loop for comparisions
			if(arr[i]>arr[j]){
				temp= arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		} //end of inner loop 
	}  //end of outer loop
	
	//printing sortd array
	for(i=0;i<10;++i)
	printf("a[%d]=%d\n",i,arr[i]);
}

