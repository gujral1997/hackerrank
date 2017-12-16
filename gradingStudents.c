#include <stdio.h>
int main(int argc, char const *argv[])
{
	int index;
	scanf("%d",&index);
	int array[index];
	for(int i=0;i<index;++i)
	{
		scanf("%d",&array[i]);
	}
	for(int i=0;i<index;++i)
	{
		if(array[i]%5!=0&&array[i]>=38)
		{
			int c=array[i]%5;
			if(c>=3)
			{
				array[i]+=(5-c);
			}
		}
	}
	for(int i=0;i<index;++i)
	{
		printf("%d\n",array[i]);
	}
	return 0;
}