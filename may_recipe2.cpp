#include<stdio.h>

class Item
{
public:
	char name[10000];
	long priority;
};


bool isPrefix(char* main, char* toCheck)
{
	while(*toCheck)
	{
		if(*main!=*toCheck)
			return false;
		else
		{
			main++;
			toCheck++;
		}
	}
	return true;
}

int main()
{
	int n;
	int q,i,j,maxindex=-1;
	char str[10000];
	long maxpriority;
	scanf("%d",&n);
	Item *items=new Item[n];
	for(i=0;i<n;i++)
	{
		scanf("%s%d",items[i].name,&items[i].priority);
	}
	scanf("%d",&q);
	while(q--)
	{
		maxindex=-1;
		maxpriority=-1000000000;
		scanf("%s",str);
		for(i=0;i<n;i++)
		{
			if(isPrefix(items[i].name,str))
			{
				if(items[i].priority>maxpriority)
				{
					maxindex=i;
					maxpriority=items[i].priority;
				}
			}
		}
		if(maxindex==-1)
			printf("NO\n");
		else
			printf("%s\n",items[maxindex].name);
		
	}
	return 0;
}