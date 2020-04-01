/*****************************************************
FileName:input_prime.c
Author: MrAi
Mail:1191054822@qq.com
Created Time: 2020年02月29日 星期六 17时12分47秒
Notes:输出100到200之间的素数
***************************************************/
#include <stdio.h>
#include <math.h>
/*void ways1()
{
    int i=0;
    int j=0;
    for(i=100; i<200; ++i)//for(i=101; i<199; i+=2) 优化循环条件，筛出偶数项
    {
        for(j=2; j<i; ++j)
        {
            if(i%j==0)
                break;
        }
        if(i==j)
            printf("%d\n",i);
    }
}
*/



void ways2()
{
    int i=0;
    int j=0;
    int falg;
    int count=0;
    for(i=100; i<=200; i++)
    {

        falg=1;
        for(j=2; j<i/2; ++j)
        {
            if(i%j==0)
            {

                falg=0;
                break;
            }
        }
        if(falg)
        {
            count++;
            printf("%d\n",i);
        }
    }
    printf("count = %d",count);
}
void ways3()
{
    int i,j,count;
    for(i=101; i<200; i+=2)
    {
        for(j=2; j<sqrt(i); j++)
        {
            if(i%j==0)
                break;
        }
        if(j>sqrt(i))
        {
            printf("%d\n",i);
            count++;
        }
    }
    printf("%d",count);
}
int main()
{
    ways3();
    return 0;
}

