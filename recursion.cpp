#include<stdio.h>
int sum (int a);
main()
{
	
	int a=1234;
	int result = sum(a);
	printf("%d",result);
	return 0;
}
int sum(int a)
{
	if(a==0)
	{
		return 0;
	}
	else
	{
		return ((a%10 )+ sum(a/10));
	}
	
	
	
}

