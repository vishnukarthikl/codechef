#include<stdio.h>
int main()
{
	int T,N;
	int min;
	int temp;
	int diff=0;
	scanf("%d",&T);
	while(T--)
	{
		scanf("%d",&N);
		scanf("%d",&temp);
		min=temp;
		diff=0;
		N--;
		while(N--)
		{
			scanf("%d",&temp);
			if(temp<min)
			{
					min=temp;
			}
			else
			{
				if(diff<(temp-min))
				{
					diff=temp-min;
				}
			}

		}
		if(diff>0)
			printf("%d\n",diff);
		else
			printf("UNFIT\n");
	}
}