//head and tail recursion

#include <stdio.h>
#include <stdlib.h>

void fun1(int n)
{
    if(n>0)
    {
        fun1(n-1);//head
        printf("%d",n);
    }
}

void fun2(int n)
{
    if(n>0)
    {
        printf("%d",n);
        fun2(n-1);//tail
    }
}

int main()
{
    int x=3;

    fun1(x);
    fun2(x);
    return 0;
}
