#include<stdio.h>
#include<string.h>
int hasCielNumber(char input[102],int n)
{
	int count[10]={0};
	n--;
	char temp;
	while(input[n]!=' ' && n>=0)
	{
		temp=input[n];
		if(temp=='8')
			count[0]++;
		else if(temp=='5')
			count[1]++;
		else if(temp=='3')
			count[2]++;
		else 
			return 0;
		n--;
	}
	if(count[0]>=count[1] && count[1] >= count[2])
		return 1;
	else return 0;

}

int main()
{
	int N;
	int count=0;
	char input[102]={0};
	scanf("%d",&N);
	while(N--)
	{
		scanf(" %[^\n]",input);
		if(hasCielNumber(input,strlen(input)))
			count++;

	}
	printf("%d\n",count);

}