#include <stdio.h>
int main()
{
    int length;
    scanf("%d",&length);
    int array[length],array1[5]={0,0,0,0,0};
    for(int i=0;i<length;i++)
    {
        scanf("%d",&array[i]);
        array1[array[i]-1]++;
    }
    int max=array1[0];
    int ans=1;
    for(int i=1;i<5;i++)
    {
        if(max<array1[i])
        {
            max=array1[i];
            ans=i+1;
        }
        if(max==array1[i])
        {
            if(ans>i+1)
            {
                ans=i+1;
            }
        }
        
    }
    printf("%d",ans);
    return 0;
}