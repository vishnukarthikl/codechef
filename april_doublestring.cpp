#include<stdio.h>
int main()
{
	int T;
	int N;
	scanf("%d",&T);
	while(T--)
	{
		scanf("%d",&N);
		printf("%d\n",(N&0x1==1)?N-1:N);
		
	}
}