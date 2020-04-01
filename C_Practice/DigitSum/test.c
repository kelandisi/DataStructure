/*****************************************************
FileName:test.c
Author: MrAi
Mail:1191054822@qq.com
Created Time: 2020年03月05日 星期四 17时12分19秒
Notes:写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和， 
例如，调用DigitSum(1729)，则应该返回1+7+2+9，它的和是19 
***************************************************/
#include <stdio.h>
int DigitSum(int n)
{
    if(n<10)
        return n;
    return n%10+DigitSum(n/10);
    
}
int main()
{
    int n=0;
    int ret=0;

    scanf("%d",&n);
   ret =  DigitSum(n);
   printf("%d",ret);
    return 0;
}

