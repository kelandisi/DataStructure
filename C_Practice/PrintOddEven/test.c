/*****************************************************
FileName:test.c
Author: MrAi
Mail:1191054822@qq.com
Created Time: 2020年03月24日 星期二 23时49分16秒
Notes:获取一个数二进制序列中所有的偶数位和奇数位， 
***************************************************/
#include <stdio.h>
void fun(int n)
{
    int i=0;
    int j=0;
    printf("偶数位是：");
    for(i=30; i>=0; i-=2)
    {
        printf("%d",(n>>i)&1);
    }
    printf("\n");
    printf("奇数位是：");
    for(j=31; j>=1; j-=2)
    {
        printf("%d",(n>>j)&1);
    }
}
int main()
{
    int n=0;
    scanf("%d",&n);
    fun(n);
    return 0;
}

