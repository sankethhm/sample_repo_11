#include<stdio.h>
int main()
{
	int size,temp=0;
	printf("enter the size\n");
	scanf("%d", &size);
	int arr[size];
	printf("enter  values\n");
	for(int i=0;i<size;i++)
		scanf(" %d",&arr[i]);
	for(int i=0;i<size;i++)
	{
		for(int j=i+1;j<size;j++)
		{
			if(arr[j]<arr[i])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}

	for(int i=0;i<size;i++)
		printf("%d ",arr[i]);
	printf("\n");

	for(int i=0;i<size;i++)
	{
		for(int j=i+1;j<size;j++)
		{
			if(arr[j]>arr[i])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}

	for(int i=0;i<size;i++)
		printf("%d ",arr[i]);
	printf("\n");
	return 0;
}

