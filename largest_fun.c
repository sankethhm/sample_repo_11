#include<stdio.h>
int max(int a,int b)
{
	return a>b?a:b;
}
int main()
{
	int a,b;
	scanf("%d %d", &a,&b);
	int result=max(a,b);
	printf("max of a & b = %d\n",result);
}
