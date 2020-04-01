/*****************************************************
FileName:Bigcommon.c
Author: MrAi
Mail:1191054822@qq.com
Created Time: 2020年03月03日 星期二 11时17分28秒
Notes:求两个数最大公约数
***************************************************/
#include <stdio.h>
int Bigcommon(int a, int b)
{
    int c=a%b;
    while(c!=0)
    {
        a=b;
        b=c;
        c=a%b;
    }
    return b;
}
int main()
{
    int a;
    int b;
    scanf("%d %d",&a,&b);
    printf("%d",Bigcommon(a,b));
    return 0;
}

