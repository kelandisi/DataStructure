/*****************************************************
FileName:test.c
Author: MrAi
Mail:1191054822@qq.com
Created Time: 2020年03月11日 星期三 13时54分45秒
Notes:模拟实现strlen函数，并且不能使用临时变量
***************************************************/
#include <stdio.h>
#include <assert.h>
int My_strlen1(const char* str)
{
    int count=0;
    assert(str!=NULL);
    while(*str!='\0')
    {
        count++;
        str++;
    }
    return count;
}
int My_strlen(const char* str)
{

    assert(str!=NULL);              
    if(*str!='\0')
        return 1 + My_strlen(str+1);//递归中不能使用前置++或者后置++，会发生段错误
    else
        return 0;
}
int My_strlen2(const char* str)
{
    assert(str!=NULL);
    char* start=str;
    while(*str!='\0')
    {
        str++;
    }
    return str-start;
}

int main()
{
    char str[]="abcd";
    int ret=0;
    ret = My_strlen2(str);
    printf("%d",ret);
    return 0;
}

