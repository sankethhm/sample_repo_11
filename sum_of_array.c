#include<stdio.h>
int main()
{
	int size,sum=0;
	printf("enter the size\n");
	scanf("%d", &size);
	int arr[size];
	printf("enter 5 values\n");
	for( int i=0;i<size;i++)
	{
		scanf("%d", &arr[i]);
	}
	for( int i=0;i<size;i++)
	{
		sum+=arr[i];
	}
	
		printf("%d",sum);
}
