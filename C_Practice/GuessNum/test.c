/*****************************************************
FileName:test.c
Author: MrAi
Mail:1191054822@qq.com
Created Time: 2020年03月03日 星期二 16时47分36秒
Notes:猜数字小游戏
***************************************************/
#include <stdio.h>
#include <time.h>
void menu()
{
    printf("******************************\n");
    printf("**          0.exit          **\n");
    printf("**          1.play          **\n");
    printf("******************************\n");
    printf("******************************\n");
}
void game()
{
    int ret = rand()%100+1;
    while(1)
    {
        int a=0;
        printf("输入你要猜的数字：");
        scanf("%d",&a);
        if(a>ret)
        {
            printf("猜大了\n");
        }
        if(a<ret)
            printf("猜小了\n");
        if(a==ret)
        {
            printf("恭喜你！猜对了！\n");
            break;
        }
        
    }
}
void test()
{
    int input=0;
    do
    {
        menu();
        printf("请输入：");
        scanf("%d",&input);  
        switch(input)
        {
        case 0:
            printf("退出！\n");
            break;
        case 1:
            game();
            break;
        default:
            printf("输入错误，请重新输入！\n");
            break;
        }
    }while(input);
}
int main()
{
    srand((unsigned int)time(NULL));
    test();
    return 0;
}

