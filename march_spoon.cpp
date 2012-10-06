#include<stdio.h>

char tolower(char a)
{
	if(a>='A'&&a<='Z')
		return a+32;
	else
		return a;
}
int main()
{
	int T;
	int numRows,numColumns;
	char matrix[101][101]={{0}};
	int i,j;
	char check[]="spoon";
	int checkIndex=0;
	int found=0;
	int prev=-1;
	scanf("%d",&T);
	while(T--)
	{
		scanf("%d%d",&numRows,&numColumns);
		for(i=0;i<numRows ; i++)
		{
			scanf("%s",matrix[i]);
			for(j=0;j<numColumns ; j++)
			{
				if(found==0)
				{
					matrix[i][j]=tolower(matrix[i][j]);
					if(matrix[i][j]==check[checkIndex])
					{
						if(prev==-1)
						{
							prev=j;
							checkIndex++;
						}
						else
						{
							if(prev+1==j)
							{
								checkIndex++;
								prev=j;
							}
							else
							{
								checkIndex=0;
								prev=-1;
							}

						}	
						
					}
					else
					{
						if(checkIndex!=5)
						{
							checkIndex=0;
							prev=-1;
						}

					}
					
				}
			}
			if(checkIndex==5)
			{
			
				found=1;
			}
			else
			{
				
					checkIndex=0;
					prev=-1;
				
				
			}
		}
		prev=-1;
		for(i=0;i<numColumns && found==0 ; i++)
		{
			for(j=0;j<numRows && found==0; j++)
			{
				if(matrix[j][i]==check[checkIndex])
				{
					if(prev==-1)
						{
							prev=j;
							checkIndex++;
						}
						else
						{
							if(prev+1==j)
							{
								checkIndex++;
								prev=j;
							}
							else
							{
								checkIndex=0;
								prev=-1;
							}

						}	
				}
				else
				{
					if(checkIndex!=5)
					{
						checkIndex=0;
						prev=-1;
					}
				}
				matrix[j][i]=0;
			}
			if(checkIndex==5)
			{
				found=1;
			}
			else
			{
				checkIndex=0;
				prev=-1;
				
			}
		}

		if(found==1)
			printf("There is a spoon!\n");
		else
			printf("There is indeed no spoon!\n");
		
		found=0;
		checkIndex=0;
	}


}