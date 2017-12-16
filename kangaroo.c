#include <stdio.h>
int main(int argc, char const *argv[])
{
	int x1,x2,v1,v2;
	scanf("%d %d %d %d",&x1,&v1,&x2,&v2);
	int f=0;
	while(x1!=x2)
			{
				if(x1>x2&&v1>=v2||x2>x1&&v2>=v1)
				{
					printf("NO\n");
					f=1;
					break;
				}
				x1+=v1;
				x2+=v2;
				if (x1==x2)
				{
					printf("YES\n");
					break;
				}
			}
	return 0;
}