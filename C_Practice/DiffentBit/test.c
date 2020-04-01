/*****************************************************
FileName:test.c
Author: MrAi
Mail:1191054822@qq.com
Created Time: 2020年03月25日 星期三 00时01分59秒
Notes:两个int（32位）整数m和n的二进制表达中，有多少个位(bit)不同？ 
***************************************************/
#include <stdio.h>
int fun(int a)
{
    int i=0;
    int count=0;
    for(i=0; i<32; i++)
    {
        if((a>>i)&1==1)
            count++;
    }
    return count;
}
int diffsumbit(int x,int y)
{
    return fun(x^y);
}
int main()
{
    int a=0;
    int b=0;
    scanf("%d %d",&a,&b);
    printf("%d",diffsumbit(a,b));
    return 0;
}

