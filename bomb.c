#include<stdio.h>

int main()
{
	int T;
	int N;
	char prev,current,total,pprev;
	scanf("%d",&T);
	while(T--)
	{
		scanf("%d ",&N);
		total=0;
		pprev='x';
		while(N--)
		{
			scanf("%c",&current);	
			if(prev=='0'&&current=='0')
				total++;
			prev=current;
		}	
		printf("%d\n",total);
	}
}
