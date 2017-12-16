#include <stdio.h>
int main(int argc, char const *argv[])
{
	int year,date=0,month=0;
	scanf("%d",&year);
	if(year>=1700&&year<=1917)
	{
		if(year%4==0)
		{
			date=12;
			month=9;
		}
		else
		{
			date=13;
			month=9;
		}
	}
	if(year==1918)
	{
		date=26;
		month=9;
	}
	if(year>=1919&&year<=2700)
	{
		if(year%4==0&&(year%100!=0||year%400==0))
		{
			date=12;
			month=9;
		}
		else
		{
			date=13;
			month=9;
		}
    }
    printf("%d.0%d.%d\n",date,month,year);
	return 0;
}