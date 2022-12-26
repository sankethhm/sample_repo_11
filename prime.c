#include<stdio.h>
int main()
{
	int num,i,flag=0,size;
	printf("enter the number range\n");
	scanf("%d", &size);
	int arr[size];
	for(i=0;i<=20;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=2;i<=num/2;i++)
	{
		if(num%i==0)
		{
			flag=1;
			break;
		}

	}
	if(flag==0)
	{
		printf("entered number is prime\n");
	}
	else
	{
		printf("entered number is not prime\n");
	}
}
