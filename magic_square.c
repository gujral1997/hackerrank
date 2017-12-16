#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
	int array[3][3];
	int array1[8]={0,0,0,0,0,0,0,0};
	int count=0;
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			scanf("%d",&array[i][j]);
		}
	}
	int sample1[3][3]={{4,9,2},{3,5,7},{8,1,6}};
	int sample2[3][3]={{2,7,6},{9,5,1},{4,3,8}};
	int sample3[3][3]={{6,1,8},{7,5,3},{2,9,4}};
	int sample4[3][3]={{8,3,4},{1,5,9},{6,7,2}};
	int sample5[3][3]={{2,9,4},{7,5,3},{6,1,8}};
	int sample6[3][3]={{6,7,2},{1,5,9},{8,3,4}};
	int sample7[3][3]={{8,1,6},{3,5,7},{4,9,2}};
	int sample8[3][3]={{4,3,8},{9,5,1},{2,7,6}};
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			if(sample1[i][j]!=array[i][j])
			{
				array1[0]+=abs(sample1[i][j]-array[i][j]);
			}
		}
	}
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			if(sample2[i][j]!=array[i][j])
			{
				array1[1]+=abs(sample2[i][j]-array[i][j]);
			}
		}
	}
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			if(sample3[i][j]!=array[i][j])
			{
				array1[2]+=abs(sample3[i][j]-array[i][j]);
			}
		}
	}
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			if(sample4[i][j]!=array[i][j])
			{
				array1[3]+=abs(sample4[i][j]-array[i][j]);
			}
		}
	}
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			if(sample5[i][j]!=array[i][j])
			{
				array1[4]+=abs(sample5[i][j]-array[i][j]);
			}
		}
	}
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			if(sample6[i][j]!=array[i][j])
			{
				array1[5]+=abs(sample6[i][j]-array[i][j]);
			}
		}
	}
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			if(sample7[i][j]!=array[i][j])
			{
				array1[6]+=abs(sample7[i][j]-array[i][j]);
			}
		}
	}
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			if(sample8[i][j]!=array[i][j])
			{
				array1[7]+=abs(sample8[i][j]-array[i][j]);
			}
		}
	}
	int min=100000;
	for(int i=0;i<=7;++i)
	{
		if(array1[i]<min)
		{
			min=array1[i];
		}
	}
	printf("%d",min);
	return 0;
}