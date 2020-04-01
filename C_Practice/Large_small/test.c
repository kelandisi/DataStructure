/*****************************************************
FileName:test.c
Author: MrAi
Mail:1191054822@qq.com
Created Time: 2020年03月23日 星期一 19时53分53秒
Notes:判断一个编辑器为大端还是小端
***************************************************/
#include <stdio.h>
int cheak()
{
    int i=1;
    return *(char*)&i;
}
int cheak1()
{
    union
    {
        char i;
        int j;
    }Un;
    Un.j=1;
    return Un.i;
}
int main()
{
    int ret = 0;
    ret = cheak();
    if(ret==1)
        printf("小端");
    else
        printf("大端");
    return 0;
}

