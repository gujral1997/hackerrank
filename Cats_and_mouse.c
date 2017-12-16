#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
	int number;
	scanf("%d",&number);
    int array[number];
	for(int i=0;i<number;i++)
	{
		for(int j=0;j<3;j++)
		{
			scanf("%d",&array[j]);
		}
		if(abs(array[0]-array[2])>abs(array[1]-array[2]))
				{
					printf("Cat B\n");
				}
	 	else if(abs(array[0]-array[2])<abs(array[1]-array[2]))
				{
					printf("Cat A\n");
				}
		else
		{
			printf("Mouse C\n");
		}
	}
	return 0;
}