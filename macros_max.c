#include<stdio.h>
#define MAX(a,b) (a>b?a:b)
#define MIN(a,b) (a<b?a:b)
#define SET_BIT(num,n) (num|1<<n)
#define CLR_BIT(num,n) (num&~(1<<n))
#define TOGGLE_BIT(num,n) (num^1<<n)
int main()
{
	printf("%d\n",MAX(10,20));
	printf("%d\n",MAX(10,5));
	printf("%d\n",SET_BIT(5,1));
	printf("%d\n",CLR_BIT(7,2));
	printf("%d\n",TOGGLE_BIT(8,3));
}
