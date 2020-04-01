/*****************************************************
FileName:test.c
Author: MrAi
Mail:1191054822@qq.com
Created Time: 2020年03月05日 星期四 17时00分28秒
Notes:编写一个函数实现n^k，使用递归实现 
***************************************************/
#include <stdio.h>
int Solution(int n,int k)
{
    if(k==0)
        return 1;
    if(k==1)
        return n;
    return Solution(n,k-1)*n;
}
int main()
{
    int n=0;
    int k=0;
    int ret=0;
    scanf("%d %d",&n,&k);
    ret = Solution(n,k); 
    printf("%d",ret);
    return 0;

}

