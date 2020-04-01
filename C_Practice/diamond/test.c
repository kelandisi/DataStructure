/*****************************************************
FileName:test.c
Author: MrAi
Mail:1191054822@qq.com
Created Time: 2020年03月03日 星期二 15时25分47秒
Notes:打印菱形
***************************************************/
#include <stdio.h>
void diamond ()
{
    int i=0;
    int j=0;
    for(i=1; i<8; i+=2)
    {
        for(j=1;j<=i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(i=8; i>=0; i-=2)
    {
        for(j=i; j>=0; j--)
            printf("*");
        printf("\n");
    }
}
int main()
{
    diamond();
    return 0;
}

