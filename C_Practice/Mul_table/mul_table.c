/*****************************************************
FileName:mul_table.c
Author: MrAi
Mail:1191054822@qq.com
Created Time: 2020年03月02日 星期一 13时41分51秒
Notes:输出乘法口诀表9*9
***************************************************/
#include <stdio.h>
void mul_table(int k)
{
    int i,j;
    for(i=1; i<=k; i++)
    {
        for(j=1; j<=i; j++)
        {
            printf("%d*%d=%d  ",i,j,i*j);
        }
        printf("\n");
    }
}
int main()
{
    int k=0;
    scanf("%d",&k);
    mul_table(k);
    return 0;
}

