#include<stdio.h>

int checkcountandlucky(int n)
{

	if(n%7==0)return n;
	while(n>0)
	{
		if((n-4)%7==0)
			return n-4;
		else
		{
			n=n-4;
		}
	}
	return -1;
}

int main()
{
	int T;
	int n;
	int answer=0;
	scanf("%d",&T);
	while(T--)
	{
		scanf("%d",&n);
		answer=checkcountandlucky(n);
		printf("%d\n",answer);
	}
}