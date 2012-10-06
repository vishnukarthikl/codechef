#include<stdio.h>


int gcd(int a,int b)
{
	while( 1 )
    {
        a = a % b;
		if( a == 0 )
			return b;
		b = b % a;

        if( b == 0 )
			return a;
    }
}


int getResult(int n)
{
	int result=0;
	int i;
	for(i=1;i<n;i++)
	{
		if(gcd(i,n)==1)
			result++;
	}
	return result;
}


int main()
{
	int T;
	int n;
	int result;
	scanf("%d",&T);
	while(T--)
	{
		scanf("%d",&n);
		
		printf("%d\n",getResult(n));
	}
}