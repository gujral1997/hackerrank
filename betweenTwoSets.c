#include <stdio.h>
int main(int argc, char const *argv[])
{
	int a,b,flag=0,counter=0,f=0;
	scanf("%d %d",&a,&b);
	int arr1[a],arr2[b];
	for (int i = 0; i < a; ++i)
	{
		scanf("%d",&arr1[i]);
	}
	for (int i = 0; i < b; ++i)
	{
		scanf("%d",&arr2[i]);
	}
	for(int i=1;i<=arr2[0];++i)
	{
		for(int j=0;j<a;j++)
		{
			if(i%arr1[j]!=0)
			{
				f=1;
				break;
			}
		}
		for(int k=0;k<b;k++)
		{
			if(arr2[k]%i!=0)
			{
				f=1;
				break;
			}
		}
	if(f==0)
		{
			counter++;
		}
	else
		{
			f=0;
		}
	}
	printf("%d\n",counter);
	return 0;
}