#include <stdio.h>
int main(int argc, char const *argv[])
{
	int pages,page_no,counter1=0,counter2=0;
	scanf("%d\n%d",&pages,&page_no);
	for(int i=1;i<page_no;i=i+2)
	{
		counter1++;
	}
	if(pages%2==0)
    {
        for(int i=page_no+1;i<=pages;i=i+2)
	{
		counter2++;
	}
    }
    else
    {
        for(int i=page_no+2;i<=pages;i=i+2)
	{
		counter2++;
	}
    }
	if(counter2<counter1)
	{
		printf("%d\n",counter2 );
	}
	else
	{
		printf("%d\n",counter1);
	}
	return 0;
}