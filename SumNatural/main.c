#include <stdio.h>
#include <stdlib.h>

int sum(int n)
{
    if(n==0)
        return 0;
    else
        return sum(n-1)+n;
}

int Isum(int n)
{
    int i,s=0;
    for(i=1;i<=n;i++)
        s=s+i;
    return s;
}
int main()
{
    int r;
    r=sum(5);
    printf("%d",r);

    r=Isum(5);
    printf("%d",r);

    return 0;
}
