#include <stdio.h>
int main(int argc, char const *argv[])
{
	int index,m,d,counter=0,sum=0;
	scanf("%d",&index);
	int array[index];
	for(int i=0;i<index;++i)
			{
				scanf("%d",&array[i]);
			}
	scanf("%d %d",&d,&m);
	for(int i=0;i<index;++i)
			{
				for(int j=i;j<m+i&&j<index;++j)
						{
							sum+=array[j];
						}
				if(sum==d)
						{
							counter++;
							sum=0;
						}
				else
						{
							sum=0;
						}
			}
	printf("%d\n",counter);
	return 0;
}