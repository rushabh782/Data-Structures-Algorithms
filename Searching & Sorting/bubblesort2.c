/*WAP that reads the value into an array.Perform bubble sort in such a way that
if array is sorted in less than (n-1) passes,rest of the passes should be discarded*/
#include<stdio.h>
#define MX 10
int main()
{
	int marks[10],i,j,temp,flag=0;
	//reading values into an array
	for(i=0;i<MX;++i){
		printf("marks[%d]=",i);
		scanf("%d",&marks[i]);
	}
	for(i=0;i<MX-1;++i) {             //outer loop for passes
	   for(j=0;j<(MX-i)-1;++j){       //inner loop for comparisions
	   	if(marks[j]>marks[j+1]){
	   		temp = marks[j];
	   		marks[j] = marks[j+1];
	   		marks[j+1] = temp;
	   		flag = 1;//if interchanging takes place make value of flag=1
		   }//end of if
	   }//end of inner loop
	   if(flag==0)/*no interchanging has taken place thus 
	   array is in sorted order*/
	   break;
	   else
	   flag=0;//reinitialising flag to 0
}
	   //printing sorted array
	   for(i=0;i<MX;++i)
	   printf("marks[%d]=%d\n",i,marks[i]);
}
