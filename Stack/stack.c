/*****************************************************
FileName:stack.c
Author: MrAi
Mail:1191054822@qq.com
Created Time: 2020年04月01日 星期三 17时13分55秒
Notes:实现栈的基本操作与习题
***************************************************/
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
typedef struct stack
{
    int *arr;
    int top;
    int capacity;
}stack;

void initstack(stack* s)
{
    int i=0;
   if(s==NULL)
       return;
   s->capacity=3;
   s->top=0;
   s->arr=(int*)malloc(sizeof(int)*s->capacity);
   for(i=0; i<s->capacity; i++)
       s->arr[i]=0;
}

void push(stack* s,int val)
{
    int i=0;
    if(s==NULL)
        return;
    if(s->top>=s->capacity)
    {
        //扩容
        s->capacity=s->capacity*2;
        int *newarr = (int*)malloc(sizeof(int)*s->capacity);
        for( i=0; i<s->top; i++)
        {
            newarr[i]=s->arr[i];
        }
        free(s->arr);
        s->arr=newarr;
    }
    s->arr[s->top++]=val;
    
}

void pop(stack* s)
{
    if(s==NULL)
        return;
    if(s->top==0)
    {
        printf("栈为空\n");
        return;
    }

    s->top--;
}

int gettop(stack* s)
{
    if(s==NULL)
        return;
    if(s->top==0)
    {
        printf("栈为空\n");
        return;
    }
    return s->arr[s->top-1];
}

int getsum(stack* s)
{
    if(s==NULL)
        return ;
    return s->top;
}

int stackempty(stack* s)
{
    if(s==NULL)
        return;
    if(s->top==0)
        return 1;
    else
        return 0;
}

void distroy(stack* s)
{
    if(s==NULL)
        return;
    free(s->arr);
    s->capacity=0;
    s->top=0;
}

void print(stack* s)
{
    if(s==NULL)
        printf("NULL");
    int i=0;
    for( i=0; i<s->top; i++)
        printf("%d ",s->arr[i]);
    printf("\n");
}
int main()
{
    stack s;
    int ret=0;
    initstack(&s);
    push(&s,10);
    push(&s,11);
    push(&s,1);
    push(&s,2);
    push(&s,3);
    print(&s);
    pop(&s);
    pop(&s);
    print(&s);
    ret = gettop(&s);
    printf("栈顶元素为%d\n",ret);
    printf("栈里面有 %d 个元素\n",getsum(&s));
    if(stackempty(&s)==1)
        printf("为空\n");
    else
        printf("不为空\n");
    distroy(&s);
    return 0;
}

