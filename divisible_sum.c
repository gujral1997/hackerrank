#include <stdio.h>
int main(int argc, char const *argv[])
	{
		int index,k,counter=0;
		scanf("%d %d",&index,&k);
		int array[index];
		for (int i = 0; i < index; ++i)
		{
			scanf("%d",&array[i]);
		}
		for(int i=0;i<index-1;++i)
			{
				for(int j=i+1;j<index;j++)
						{
							if((array[i]+array[j])%k==0)
								{
									counter++;
								}
						}
			}
		printf("%d\n",counter);
		return 0;
	}	