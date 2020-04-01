/*****************************************************
FileName:test.c
Author: MrAi
Mail:1191054822@qq.com
Created Time: 2020年03月03日 星期二 15时11分13秒
Notes:数一下 1到 100 的所有整数中出现多少次数字9
***************************************************/
#include <stdio.h>
int Find9(int a,int b)
{
    int i=0;
    int count=0;
    int k=0;
    for(i=a; i<=b; i++)
    {
        k=i;
        while(k!=0)
        {
            if(k%10==9)
                count++;
            k=k/10;
        }
    }
    printf("count=%d",count);
}
int main()
{
    int begin=0;
    int end=0;
    scanf("%d %d",&begin,&end);

    Find9(begin,end);
    return 0;
}

