#include<stdio.h>
#include<string.h>


int isLuckyString(char present[][51],int total,char toCheck[51])
{
	int i,j,k,l;
	int length=strlen(toCheck);
	int count;
	int presentLength;
	if(length>=47)
		return 1;
	else
	{
		for(i=0;i<total;i++) //loop through present
		{
			presentLength=strlen(present[i]);
			for(j=0;j<=length-presentLength;j++)
			{
				k=j;
				l=0;
				while(present[i][l]==toCheck[k]&&l<presentLength)
				{
					l++;
					k++;
				}
				if(l==presentLength)
					return 1;
			}
		}
		return 0;
	}
}

int main()
{
	int k,m,i,j;
	char present[51][51];
	char toCheck[51];
	scanf("%d%d",&k,&m);
	for(i=0;i<k;i++)
	{
		scanf(" %s",present[i]);
	}
	for(i=0;i<m;i++)
	{
		scanf(" %s",toCheck);
		printf("%s\n",isLuckyString(present,k,toCheck)?"Good":"Bad");
		
					
	}
	return 0;
}