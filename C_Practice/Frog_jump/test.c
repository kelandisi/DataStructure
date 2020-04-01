/*****************************************************
FileName:test.c
Author: MrAi
Mail:1191054822@qq.com
Created Time: 2020年03月11日 星期三 16时16分43秒
Notes:青蛙跳台阶问题（一次只能跳1,或2阶）和变态青蛙跳台阶（一次可跳n阶）
***************************************************/
#include <stdio.h>
int fun(int n)
{
    if(n==1)
        return 1;
    if(n==2)
        return 2;
    return fun(n-1)+fun(n-2);
}
int nfun(int n)
{
    int sum=1;
    int i=0;
    /*if(n==0)
        return 1;
    if(n==1)
        return 1;
    for(i=1; i<n; i++)
    {
        sum=sum*2;
    }
    return sum;
    */
    //降低时间复杂度
    if(n<=0)
        return 0;
    return 1<<(n-1);
}
int main()
{
    int n=0;
    int ret =0;

    scanf("%d",&n);
    ret = nfun(n);
    printf("%d\n",ret);
    return 0;
}

