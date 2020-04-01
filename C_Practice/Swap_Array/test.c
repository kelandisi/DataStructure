/*****************************************************
FileName:test.c
Author: MrAi
Mail:1191054822@qq.com
Created Time: 2020年03月03日 星期二 14时40分40秒
Notes:交换两个数组中的内容，两个数组一样大
***************************************************/
#include <stdio.h>
void swap(int* x,int* y)
{
    int tmp;
    tmp=*x;
    *x=*y;
    *y=tmp;
}
void Swap_arr(int* a,int* b,int sz)
{
    int i=0;
    for(i=0; i<sz; i++)
    {
        swap(&a[i],&b[i]);
    }
}
int main()
{
    int a[]={1,2,3,4};
    int b[]={9,8,7,6};
    int i;
    int sz=sizeof(a)/sizeof(int);
    Swap_arr(&a,&b,sz);
    for(i=0; i<sz; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    for(i=0; i<sz; i++)
    {
        printf("%d ",b[i]);
    }

    return 0;
}

