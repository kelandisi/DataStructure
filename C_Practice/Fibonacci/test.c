/*****************************************************
FileName:test.c
Author: MrAi
Mail:1191054822@qq.com
Created Time: 2020年03月05日 星期四 16时40分33秒
Notes:递归和非递归分别实现斐波那契数列
 ***************************************************/
#include <stdio.h>
int Fibonacci(int k)
{
    int a=1;
    int b=1;
    int c=0;
    int i=0;
    if(k==0)
        return 0;
    if(k==1 || k==2)
        return 1;
    for(i=2; i<k; i++)
    {
        c=a+b;
        a=b;
        b=c;
    }
    return c;
}
int nFibonacci(int k)
{
    if(k==0)
        return 0;
    if(k==1 || k==2)
        return 1;
    return nFibonacci(k-1)+nFibonacci(k-2);
}
    int main()
    {
        int k=0;
        int ret=0;
        scanf("%d",&k);
        ret = nFibonacci(k);
        printf("%d",ret);
        return 0;
    }

