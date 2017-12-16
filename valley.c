#include <stdio.h>
int main(int argc, char const *argv[])
{
	int length,counter=0;
	scanf("%d",&length);
	char array[length];
	for(int i=0;i<length;++i)
	{
		scanf("%c",&array[i]);
	}
	for(int i=0;i<length;++i)
	{
		if(array[i]==array[i+1]&&array[i]!=array[i-1])
		{
			counter++;
			printf("%d\n%c",counter,array[i]);
		}
	}
	//printf("%d\n",counter/2);
	return 0;
}