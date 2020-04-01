/*****************************************************
FileName:test.c
Author: MrAi
Mail:1191054822@qq.com
Created Time: 2020年03月11日 星期三 14时06分34秒
Notes:求n的阶乘，并用递归
***************************************************/
#include <stdio.h>
int fun(int n)
{
    int i=0;
    int sum=1;
    for(i=1; i<=n; i++)
    {
        sum=sum*i;
    }
    return sum;
}
int nfun(int n)
{
    if(n==1)
        return 1;
    return nfun(n-1)*n;
}
int main()
{
    int n=0;
    int ret=0;
    scanf("%d",&n);
    ret = nfun(n);
    printf("%d",ret);
    return 0;
}

