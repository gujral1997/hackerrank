#include <stdio.h>
int main(int argc, char const *argv[])
{
	int s,t,a,b,n,m,apples=0,oranges=0;
	scanf("%d %d",&s,&t);
	scanf("%d %d",&a,&b);
	scanf("%d %d",&m,&n);
	int arr1[m];
	int arr2[n];
	for(int i=0;i<m;i++)
			{
				scanf("%d",&arr1[i]);
			}
	for(int i=0;i<n;i++)
			{
				scanf("%d",&arr2[i]);
			}
	for(int i=0;i<m;i++)
			{
				arr1[i]+=a;
				if(arr1[i]>=s&&arr1[i]<=t)
				{
					apples++;
				}
			}
	for(int i=0;i<n;i++)
			{
				arr2[i]+=b;
				if(arr2[i]>=s&&arr2[i]<=t)
				{
					oranges++;
				}
			}
	printf("%i\n",apples);
	printf("%i\n",oranges);
	return 0;
}