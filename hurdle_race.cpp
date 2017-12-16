#include <stdio.h>
int main(int argc, char const *argv[])
{
	int length,k,answer=0;
	scanf("%d %d",&length,&k);
	int array[length];
	for(int i=0;i<length;++i)
	{
		scanf("%d",&array[i]);
	}
	for(int i=0;i<length;++i)
	{
		if(k<=array[i])
		{
			answer++;
		}
	}
	printf("%d\n",answer);
	return 0;
}