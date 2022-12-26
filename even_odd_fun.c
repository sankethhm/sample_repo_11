#include<stdio.h>
int even_odd(int num)
{
	if (num&1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int main()
{
	int num;
	printf("enter the number\n");
	scanf("%d", &num);
	int result=even_odd(num);
	if(result==1)
	{
		printf("odd\n");
	}
	else
	{
		printf("even\n");
	}
}
