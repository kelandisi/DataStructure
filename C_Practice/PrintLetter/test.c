/*****************************************************
FileName:test.c
Author: MrAi
Mail:1191054822@qq.com
Created Time: 2020年03月04日 星期三 17时17分05秒
Notes:编写一个程序，可以一直接收键盘字符， 
如果是小写字符就输出对应的大写字符， 
如果接收的是大写字符，就输出对应的小写字符， 
如果是数字不输出。 
***************************************************/
#include <stdio.h>

int main()
{
    int ch=0;
    while((ch=getchar())!=EOF)
    {
        if(ch>='a'&& ch<='z')
        {
           ch-=32;
           printf("%c",ch);
        }
        else if(ch>='A'&& ch<='Z')
        {
           ch+=32;
           printf("%c",ch);
        }
        else
            ;

    }
    return 0;
}

