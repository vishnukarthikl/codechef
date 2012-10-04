#include<stdio.h>
#include<string.h>
#define MAXCHARS 26
int isPossible(char word[1002])
{
	int i;
	int instructions=0;
	int diff;
	int length=strlen(word);
	instructions=length;
	for(i=1;i<length;i++)
	{

		diff=word[i]-word[i-1];


		//printf("%c - %c = %d\n",word[i],word[i-1],diff<0?MAXCHARS+diff:diff);
		if(diff>=0)
			instructions+=diff;
		else
			instructions+=MAXCHARS+diff;
	}
	instructions++;
	//printf("%s: %d %d\n",word,instructions,11*length);
	return instructions<=(11*length)?1:0;

}

int main()
{
	int T;
	char word[1002];
	scanf("%d",&T);
	while(T--)
	{
		scanf(" %s",word);
		printf("%s\n",isPossible(word)?"YES":"NO");
	}
	return 0;
}
