#include<stdio.h>

int main()
{
	int T;
	int n,m,a,b,x,y,q;
	int i,j,k;
	int temp;
	int matrix[101][101]={{0}};
	scanf("%d",&T);
	while(T--)
	{

		

		scanf("%d%d",&n,&m);
		for(i=0;i<n;i++)
		{
			for(j=i;j<n;j++)
			{
				matrix[i][j]=10000;
				matrix[j][i]=10000;
			}
		}
		for(i=1;i<=m;i++)
		{
			scanf("%d%d",&a,&b);
			matrix[a][b]=1;
			matrix[b][a]=1;

		}

		for(k=0;k<n;k++)
		{
			for(i=0;i<n;i++)
			{
				for(j=0;j<n;j++)
				{
					temp=matrix[i][k]+matrix[k][j];
					matrix[i][j]=matrix[i][j]<temp?matrix[i][j]:temp;
				}
			}
		}

		scanf("%d",&q);
		for(i=1;i<=q;i++)
		{
			scanf("%d%d",&x,&y);
			if(matrix[x][y]<10000 || x==y)
				printf("YO\n");
			else
				printf("NO\n");
		}
	}
}