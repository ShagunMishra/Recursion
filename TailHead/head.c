#include <stdio.h>
#include <stdlib.h>

void fun(int n)
{
    if(n>0)
    {
        fun(n-1); //head
        printf("%d",n);
    }
}

int main()
{
    int x=3;

    fun(x);
    return 0;
}
