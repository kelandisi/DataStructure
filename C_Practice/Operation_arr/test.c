/*****************************************************
FileName:test.c
Author: MrAi
Mail:1191054822@qq.com
Created Time: 2020年03月05日 星期四 16时27分16秒
Notes:
创建一个数组， 
实现函数init（）初始化数组、 
实现empty（）清空数组、 
实现reverse（）函数完成数组元素的逆置。 
要求：自己设计函数的参数，返回值。 

***************************************************/
#include <stdio.h>
void prinf(int*arr, int sz)
{
    int i=0;
    for(i=0; i<sz; i++)
    {
        printf("%d ",arr[i]);
    }
}
void initarr(int* arr,int sz)
{
    int i=0;
    for(i=0; i<sz; i++)
    {
        arr[i]=9;
    }
}
void empty(int* arr,int sz)
{
    int i=0;
    for(i=0; i<sz; i++)
    {
        arr[i]=0;
    }

}
void reverse(int* arr,int sz)
{
    int begin=0;
    int end=sz-1;
    while(begin<=end)
    {
        int temp=0;
        temp = arr[begin];
        arr[begin]=arr[end];
        arr[end]=temp;
        begin++;
        end--;
    }
}
int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int sz=sizeof(arr)/sizeof(int);
    reverse(arr,sz);
    prinf(arr,sz);
    initarr(arr,sz);
    prinf(arr,sz);
    empty(arr,sz);
    prinf(arr,sz);
    return 0;
}

