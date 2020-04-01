/*****************************************************
FileName:test.c
Author: MrAi
Mail:1191054822@qq.com
Created Time: 2020年03月04日 星期三 16时09分54秒
Notes:模拟实现strcpy函数
***************************************************/
#include <stdio.h>
#include <assert.h>
//非递归实现
char*  My_strcpy(const char* arr, char* arr2)
{
    assert(arr!=NULL);
    assert(arr2!=NULL);
    char* temp=arr2;
    while(*arr2=*arr)
    {
      arr2++;
      arr++;
    }
    return temp;

}

//递归实现
void My_nstrcpy(char* arr,char* arr2)
{
    if(*arr=='\0')
    {
        if(*arr2='\0')
            return;
    }
    if(*arr!='\0')
    {
        *arr2=*arr;
        arr++;
        arr2++;
        My_nstrcpy(arr,arr2);
    }
}
int main()
{
    char arr[]="abcd";
    char arr2[64]={0};
    printf("%s\n",My_strcpy(arr,arr2));
    return 0;
}

