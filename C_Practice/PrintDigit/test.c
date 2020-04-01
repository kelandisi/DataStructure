/*****************************************************
FileName:test.c
Author: MrAi
Mail:1191054822@qq.com
Created Time: 2020年03月24日 星期二 23时20分58秒
Notes:递归方式实现打印一个整数的每一位 
 ***************************************************/
#include <stdio.h>
void fun(int n)
{
    if(n<10)
        printf("%d ",n);
    if(n>=10)
    {
        fun(n/10);
        printf("%d ",n%10);
    }
}
int main()
{
    int n=0;
    scanf("%d",&n);
    fun(n);
    return 0;
}

