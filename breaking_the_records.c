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
	 int max=array[0],min=array[0],max_counter=0,min_counter=0;
	 for(int i=0;i<index;i++)
	 		{
	 			if(array[i]>max)
	 			{
	 				max=array[i];
	 				max_counter++;
	 			}
	 			if(array[i]<min)
	 			{
	 				min=array[i];
	 				min_counter++;
	 			}
	 		}
    printf("%d %d\n",max_counter,min_counter );
	return 0;
}