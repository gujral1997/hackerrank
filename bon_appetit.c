#include <stdio.h>
int main(int argc, char const *argv[])
{
	int n,k,cost,sum=0,total_sum=0;
	scanf("%d %d",&n,&k);
	int array[n];
	for(int i=0;i<n;++i)
	{
		scanf("%d",&array[i]);
	}
	scanf("%d",&cost);
	for(int i=0;i<n;i++)
	{
		total_sum+=array[i];
	}
	total_sum-=array[k];
	total_sum/=2;
	int ans=cost-total_sum;
	if((ans)==0)
	{
		printf("Bon Appetit\n");
	}
	else
	{
		printf("%d\n",ans);
	}
	return 0;
}