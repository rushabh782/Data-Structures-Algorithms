#include<stdio.h>
#include<conio.h>
int main()
{
	int sc[10],i,val;
	printf("\nEnter array elements:\n");
	for(i=0;i<10;i++)
	scanf("%d",&sc[i]);
	
	printf("\nEnter the number to be found:");
	scanf("%d",&val);
	
	for(i=0;i<10;i++)
	if(sc[i]==val)
	{
		printf("\nExist at location %d",i+1);
		break;
	}
	if(i==10)
	printf("\n%d This value does not exist");
	getch();
}
