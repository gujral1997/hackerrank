#include <stdio.h>
int main(int argc, char const *argv[])
{
	int max=0;
	int length;
	scanf("%d",&length);
	int array[length];
	int array1[99];
	for(int i=0;i<99;i++)
	{
		array1[i]=0;
	}
	for(int i=0;i<length;++i)
	{
		scanf("%d",&array[i]);
		array1[array[i]-1]++;
	}
	for(int i=0;i<98;++i)
	{
		if(array1[i]+array1[i+1]>max)
		{
			max=array1[i]+array1[i+1];
		}
	}
	printf("%d",max);
	return 0;
}