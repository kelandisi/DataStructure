/*****************************************************
FileName:Leap_year.c
Author: MrAi
Mail:1191054822@qq.com
Created Time: 2020年03月03日 星期二 10时46分47秒
Notes:输出1000-2000之间的闰年
***************************************************/
#include <stdio.h>
void Lear_year()
{
    int i=0;
    for(i=1000; i<=2000; i++)
    {
        if(i%4==0 && i%100!=0||i%400==0)
            printf("%d年时闰年\n",i);
    }
}
int main()
{
    Lear_year();
    return 0;
}

