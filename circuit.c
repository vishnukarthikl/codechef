#include<stdio.h>
int main()
{
	int T,N,current,min,total;
	scanf("%d",&T);
	while(T--)
	{
		total=0;
		min=0x7fffffff;
		scanf("%d",&N);
		while(N--)
		{
			scanf("%d",&current);
			if(current<=min)
			{
				total++;
				min=current;
			}
			
		}
		printf("%d\n",total);
	}
}
