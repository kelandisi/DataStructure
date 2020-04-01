/*****************************************************
FileName:test.c
Author: MrAi
Mail:1191054822@qq.com
Created Time: 2020年03月25日 星期三 21时39分53秒
Notes:日本某地发生了一件谋杀案，警察通过排查确定杀人凶手必为4个 
嫌疑犯的一个。以下为4个嫌疑犯的供词。 
A说：不是我。 
B说：是C。 
C说：是D。 
D说：C在胡说 
已知3个人说了真话，1个人说的是假话。 
现在请根据这些信息，写一个程序来确定到底谁是凶手。 
***************************************************/
#include <stdio.h>

int main()
{
    int killer=0;
    for(killer='a'; killer<='d'; killer++)
    {
        if((killer!='a')+(killer=='c')+(killer=='d')+(killer!='d')==3)
            printf("killer是：%c",killer);
    }
    return 0;
}

