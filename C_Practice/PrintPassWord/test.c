/*****************************************************
FileName:test.c
Author: MrAi
Mail:1191054822@qq.com
Created Time: 2020年03月04日 星期三 15时48分16秒
Notes:  编写代码模拟三次密码输入的场景。 
最多能输入三次密码，密码正确，提示“登录成功”,密码错误， 
可以重新输入，最多输入三次。三次均错，则提示退出程序。
***************************************************/
#include <stdio.h>
#include <string.h>
int main()
{
    char password[]="abc";
    char arr[20]={0};
    int i=0;
    for(i=3; i>=1; i--)
    {
        scanf("%s",&arr);
        if(strcmp(arr,password)==0)
        {
            printf("输入正确！\n");
            break;
        }
        else
            printf("输入错误，请重新输入，你还有%d次机会\n",i-1);
    }
    if(i==0)
        printf("3次输入错误，请1小时后输入！\n");
    return 0;
}

