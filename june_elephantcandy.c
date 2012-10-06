#include<stdio.h>

int main()
{
	int t,n,c,total,i,temp;

	scanf("%d",&t);
	while(t--)
	{
		total=0;
		scanf("%d%d",&n,&c);
		for(i=0;i<n;i++)
		{
			scanf("%d",&temp);
			total+=temp;
		}
		if(total<=c)
			printf("Yes\n");
		else
			printf("No\n");
	}
}