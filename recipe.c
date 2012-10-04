#include<stdio.h>
#include<string.h>
int checkPalindromeness(char a,char b)
{
	
	if(a=='?'&&b=='?')
		return 26;
	if(a=='?'||b=='?')
		return 1;
	if(a==b)
		return 1;
	else
		return -1;
}

int main()
{
	int T,length,count,i,temp;
	char r[1000002];
	scanf("%d",&T);
	while(T--)
	{
		count=1;
		scanf(" %s",r);
		length=strlen(r);
		for(i=0;i<=length-i-1;i++)
		{
			temp=checkPalindromeness(r[i],r[length-i-1]);
			if(temp==-1)
			{
				count=0;
				break;
			}
			else
			{
				count*=temp;
				count=count%10000009;
			}
		}
		printf("%d\n",count%10000009);
	}
	return 0;
}
