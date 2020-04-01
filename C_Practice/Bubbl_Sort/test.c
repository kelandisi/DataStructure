/*****************************************************
FileName:test.c
Author: MrAi
Mail:1191054822@qq.com
Created Time: 2020年03月13日 星期五 15时57分07秒
Notes:冒泡排序
***************************************************/
#include <stdio.h>
void swap(int *x,int *y)
{
    *x=*x^*y;
    *y=*x^*y;
    *x=*x^*y;
}
void BubblSort(int* arr, int sz)
{
    int i=0;
    int j=0;
    for(i=0; i<sz-1; i++)
    {
        int falg=0;
        for(j=0; j<sz-1-i; j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(&arr[j],&arr[j+1]);
                falg=1;    
            }
        }
        if(falg==0)
            break;
    }
}
int main()
{
    int i=0;
    int arr[10]={1,2,6,3,5,1,6,8,9,10};
    int sz=sizeof(arr)/sizeof(int);
    BubblSort(arr,sz);
    for(i=0; i<sz; i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}

