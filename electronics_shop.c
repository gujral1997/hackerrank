#include <stdio.h>
int main(int argc, char const *argv[])
{
	int n,m,budget,count=0,max=-1;
	scanf("%d %d %d",&budget,&n,&m);
	int array1[n],array2[m];
	int array3[m*n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&array1[i]);
	}for(int i=0;i<m;i++)
	{
		scanf("%d",&array2[i]);
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			array3[count]=array1[i]+array2[j];
			count++;
		}
	}
	for(int i=0;i<m*n;++i)
	{
		if(array3[i]>max&&array3[i]<=budget)
		{
			max=array3[i];
		}
	}
	printf("%d",max);
	return 0;
}