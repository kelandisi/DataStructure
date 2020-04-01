/*****************************************************
FileName:test.c
Author: MrAi
Mail:1191054822@qq.com
Created Time: 2020年03月05日 星期四 17时23分43秒
Notes:
编写一个函数 reverse_string(char * string)（递归实现） 
实现：将参数字符串中的字符反向排列。 
要求：不能使用C函数库中的字符串操作函数。
***************************************************/
#include <stdio.h>
void reverse_string(char* string)
{
    if(*string == '\0')
        return;
    reverse_string(string+1);//注意此处不要使用string++或++string，会发生错误。
        printf("%c ",*string);
}
int main()
{
    char str[]="abcd";
    reverse_string(str);
    return 0;
}

