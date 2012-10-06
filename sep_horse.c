#include<stdio.h>
int abs(int N)
{
	return N>=0?N:-N;
}

int findMinimum(int S[5002],int index, int currentMin)
{
	int diff,i;
	for(i=0;i<index;i++)
	{
		diff=abs(S[i]-S[index]);
		if(diff<currentMin)
			currentMin=diff;
	}
	return currentMin;
}

int main()
{
	int T,N,S[5002],i,min;
	scanf("%d",&T);
	while(T--)
	{
		min=1000000000;
		scanf("%d",&N);
		for(i=0;i<N;i++)
		{
			scanf("%d",&S[i]);
			min=findMinimum(S,i,min);
		}
		printf("%d\n",min);
	}

	return 0;
}