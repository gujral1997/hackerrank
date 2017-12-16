#include <stdio.h>
int main(int argc, char const *argv[])
{
	int length,sum=0;
	scanf("%d",&length);
	int array[length];
	int array1[100];
	for(int i=0;i<100;++i)
	{
		array1[i]=0;
	}
	for(int i=0;i<length;++i)
	{
		scanf("%d",&array[i]);
		array1[array[i]-1]++;
	}
	for(int i=0;i<100;++i)
	{
		array1[i]/=2;
	}
	for(int i=0;i<100;++i)
	{
		sum+=array1[i];
	}
	printf("%d\n",sum);
	return 0;
}