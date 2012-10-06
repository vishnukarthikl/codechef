	#include<stdio.h>

	int findMinDifference(int num)
	{
		int i,j,min=100000000;
		for(i=1;i*i<=num;i++)
			{
				j=num/i;
				if(num%i==0)
				{
					if(j-i<min)
						min=j-i;
				}
			}
			return min;
	
	}
	


	int main()
	{
		int t,num;
		scanf("%d",&t);
		while(t--)
		{
			scanf("%d",&num);
			printf("%d\n",findMinDifference(num));
		}
		return 0;
	}