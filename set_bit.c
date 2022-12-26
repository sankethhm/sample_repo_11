#include<stdio.h>
int main()
{
	int num,i,n,j;
	printf("enter the num\n");
	scanf("%d", &num);
	printf("enter n value: \n");
	scanf("%d", &n);
	for(i=31;i>=0;i--)
	{
		if(num >> i & 1)
		{
			printf("1");
		}
		else
		{
			printf("0");
		}

	}
	printf("\n");
	{	
		num=num|(1<<n)-1;
	}
	for(i=31;i>=0;i--)
	{
		if(num >> i & 1)
		{
			printf("1");
		}
		else
		{
			printf("0");
		}
	}
	printf("\n");
return 0;
}

