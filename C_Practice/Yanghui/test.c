/*****************************************************
FileName:test.c
Author: MrAi
Mail:1191054822@qq.com
Created Time: 2020年03月25日 星期三 21时28分24秒
Notes:打印杨辉三角
***************************************************/
#include <stdio.h>
void fun(int n)
{
    int i=0;
    int j=0;
    int arr[100][100]={0};
    for(i=1; i<=n; i++)
    {
        arr[i][0]=1;
        for(j=1; j<=i; j++)
        {
            arr[i][j]=arr[i-1][j-1]+arr[i-1][j];
        }
    }
    for(i=0; i<=n; i++)
    {
        for(j=0; j<i; j++)
        {
            printf("%3d",arr[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    int n=0;
    scanf("%d",&n);
    fun(n);
    return 0;
}

