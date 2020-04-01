/*****************************************************
FileName:test.c
Author: MrAi
Mail:1191054822@qq.com
Created Time: 2020年03月04日 星期三 15时21分17秒
Notes:二分查找
***************************************************/
#include <stdio.h>
int Binary_Search(int* arr,int key,int sz)
{
    int begin=0;
    int end=sz-1;
    int mid=0;
    while(begin<=end)
    {
        mid=end+(begin-end)/2;
        if(key<arr[mid])
        {
           end=mid-1;
        }
        if(key>arr[mid])
        {
            begin=mid+1;
        }
        if(key==arr[mid])
            return mid;
    }
    return -1;
}
int main()
{
    int arr[10]={0};
    int i=0;
    int sz=0;
    int ret = 0;
    int key=0;
    for(i=0; i<10; i++)
    {
        scanf("%d ",&arr[i]);
    }
    scanf("%d",&key);
    sz=sizeof(arr)/sizeof(int);
    ret = Binary_Search(arr,key,sz);
    printf("key是下标为%d的数",ret);
    return 0;
}

