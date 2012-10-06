#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
	
	int N,T,i;
	int x[1001],y[1001];
	long long ans;
	int x1,y1,x2,y2;
	scanf("%d",&T);
	while(T--)
	{
		scanf("%d",&N);
		for(i=0;i<N;i++)
		{
			scanf("%d %d",&x[i],&y[i]);
		}
		if(N%2)
		{
			ans=1;
		}
		else
		{
			sort(x,x+N);
			sort(y,x+N);
			x1=x[(N/2)-1];
			x2=x[(N/2)];
			y1=y[(N/2)-1];
			y2=y[(N/2)];
			ans=((x2-x1)+1)*((y2-y1)+1);
		}
		printf("%lld\n",ans);
		
	}
	return 0;
}
