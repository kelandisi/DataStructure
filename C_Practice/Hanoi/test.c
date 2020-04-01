/*****************************************************
FileName:test.c
Author: MrAi
Mail:1191054822@qq.com
Created Time: 2020年03月11日 星期三 16时02分55秒
Notes:汉诺塔问题
***************************************************/
#include <stdio.h>

void Hanoi(int n,char A ,char B ,char C)
{
    if(n==1)
    {
       printf("%c -> %c\n",A,C);
       return;
    }
    
    Hanoi(n-1,A,C,B);
        
    {
        printf("%c -> %c\n",A,C);
    }
    Hanoi(n-1,B,A,C);
        return;
}
int main()
{
    int n=0;
    char A='A',B='B',C='C';
    scanf("%d",&n);
    Hanoi(n,A,B,C);
    return 0;
}

