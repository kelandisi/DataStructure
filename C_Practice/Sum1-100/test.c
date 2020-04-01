/*****************************************************
FileName:test.c
Author: MrAi
Mail:1191054822@qq.com
Created Time: 2020年03月03日 星期二 15时04分07秒
Notes:用C语言计算1/1-1/2+1/3-1/4+1/5 …… + 1/99 - 1/100 的值
***************************************************/
#include <stdio.h>
void Solution ()
{
    int i;
    int a=1;
    double sum=0.0;

    for(i=1; i<=100; i++)
    {
        sum+=(1.0*a)/i;
        a=-a;
    }
    printf("%lf",sum);
}
int main()
{
    Solution();
    return 0;
}

