#include<stdio.h>
#define MAXLENGTH 60
int main()
{
	int T;
	char jewel[101],stone[101];
	int latin[MAXLENGTH]={0};
	int i=0;
	int count;
	scanf("%d",&T);
	while(T--)
	{
		for(i=0;i<MAXLENGTH;i++)
			latin[i]=0;

		count=0;
		scanf("%s",jewel);
		i=0;
		while(jewel[i]!='\0')
		{
			latin[jewel[i]-'A']=1;
			i++;
		}
		i=0;
		scanf("%s",stone);
		while(stone[i]!='\0')
		{
			if(latin[stone[i]-'A']==1)
				count++;
			i++;
		}
		printf("%d\n",count);

	}
}