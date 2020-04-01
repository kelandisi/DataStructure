/*****************************************************
FileName:Swap.c
Author: MrAi
Mail:1191054822@qq.com
Created Time: 2020年03月03日 星期二 10时57分22秒
Notes:交换两个整形，不适用临时变量
***************************************************/
#include <stdio.h>
void ways1(int* x,int* y)
{
    *x=*x^*y;
    *y=*x^*y;
    *x=*x^*y;
}
void ways2(int* x,int* y)
{
    *x=*x+*y;
    *y=*x-*y;
    *x=*x-*y;
}
int main()
{
    int a=10;
    int b=5;
    ways2(&a,&b);
    printf("a=%d b=%d",a,b);
    return 0;
}

