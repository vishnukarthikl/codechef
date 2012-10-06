#include<stdio.h>
#include<string.h>

int numLucky(char str[100001],int start,int finish,char toCheck)
{
	int i;
	int count=0;
	if(finish<start)
		return 0;
	else
	{
		for(i=start;i<=finish;i++)
		{
			if(str[i]==toCheck)
				count++;
		}
		return count;
	}
}

int returnLuckySubstring(char str[100001])
{
	int m=strlen(str);
	int i,j,k;
	int count=0;
	for(i=0;i<m;i++)
	{
		for(k=i;k<m;k++)
		{
			for(j=0;j<i;j++)
			{
				if(numLucky(str,j,i-1,'4')==numLucky(str,i,k,'7'))
					count++;
			}
		}

		for(j=0;j<i;j++)
		{
			for(k=i;k<m;k++)
			{
				if(numLucky(str,j,i-1,'4')==numLucky(str,i,k,'7'))
					count++;
			}
		}
	}
	return count;

}

int main()
{
	int T;
	char str[100001];
	scanf("%d",&T);
	
	while(T--)
	{
		scanf(" %s",str);
		printf("%d",returnLuckySubstring(str));
	}
	return 0;
}