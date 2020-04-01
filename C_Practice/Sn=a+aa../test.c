/*****************************************************
FileName:test.c
Author: MrAi
Mail:1191054822@qq.com
Created Time: 2020年03月03日 星期二 15时38分03秒
Notes:求Sn=a+aa+aaa+aaaa+aaaaa的前5项之和，其中a是一个数字
 ***************************************************/
#include <stdio.h>
int Solution(int a)
{
    int i=0;
    int sum=0;
    int temp=0;
    for(i=0; i<5; i++)
    {
        temp=temp*10+a;
        sum=sum+temp;
    }
    return sum;
}
int main()
{
    int a=0;
    scanf("%d",&a);
    printf("%d", Solution(a));
    return 0;
}

