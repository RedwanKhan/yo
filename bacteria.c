#include <stdio.h>

int bacteriacount(int n)
{
    if(n==0)
        return 0;
    if(n==1 || n==2)
        return 1;
    if(n==3)
        return 2;
    else
        return bacteriacount(n-1)+bacteriacount(n-2)+bacteriacount(n-3);
}
int main()
{

    int n,ans=0;
    scanf("%d",&n);
    ans=bacteriacount(n);
    printf("%d",ans);
    return 0;
}
