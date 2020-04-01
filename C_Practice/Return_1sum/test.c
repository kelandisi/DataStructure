/*****************************************************
FileName:test.c
Author: MrAi
Mail:1191054822@qq.com
Created Time: 2020年03月24日 星期二 23时32分55秒
Notes:写一个函数返回参数二进制中 1 的个数 
***************************************************/
#include <stdio.h>
int count_one_bits(unsigned int value)
{
    int i=0;
    int count;
    for(i=0; i<32; i++)
    {
        if(value%2==1)
            count++;
        value=value/2;
    }
    return count;
}
int count_one_bits1(unsigned int value)
{
    int count=0;
    while(value)
    {
        value=value&(value-1);
        count++;
    }
    return count;
}
int count_one_bits2(unsigned int value) 
{
    int i=0;
    int count=0;
    for(i=32; i>0; i--)
    {
        if((value>>i)&1==1)
            count++;
    }
    return count;
}
int main()
{
    unsigned int value;
    scanf("%u",&value);
    printf("%d",count_one_bits2(value));
    return 0;
}

