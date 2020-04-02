/*****************************************************
FileName:queue.c
Author: MrAi
Mail:1191054822@qq.com
Created Time: 2020年04月02日 星期四 21时07分58秒
Notes:队列的基本操作
 ***************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
typedef struct Node
{
    int val;
    struct Node* next;
}Node;

typedef struct Queue
{
    Node* front;
    Node* rear;
}Queue;

void InitQueue(Queue* q)
{
    q->front = q->rear =NULL;
}

void PushQueue(Queue* q,int val)
{
    Node* node = (Node*)malloc(sizeof(Node));;
    node->val=val;
    if(q->front==NULL)
        q->front=node;
    else
        q->rear->next=node;
    q->rear=node;
}

void popQueue(Queue* q)
{
    assert(q->front!=NULL);
    Node* second=q->front->next;
    free(q->front);
    q->front=second;
}

void print(Queue* q)
{
    if(q==NULL)
    {
        printf("队列为空\n");
        return;
    }
    printf("NULL-->");
    Node* cur=q->front;

    while(1)
    {
        printf("%d--->",cur->val);
        if(cur==q->rear)
            break;
        cur=cur->next;
    }
    printf("NULL\n");
}

int getfront(Queue * q)
{
    return q->front->val;
}

int getrear(Queue*q)
{
    return q->rear->val;
}

int getsum(Queue* q)
{
    int count=0;
    if(q->front==NULL)
        return 0;
    Node* cur=q->front;
    while(1)
    {
        count++;
        if(cur==q->rear)
            break;
        cur=cur->next;
    }
    return count;
}

int empty(Queue* q)
{
    if(q->front==NULL)
        return 1;
    else
        return 0;
}

void destroy(Queue *q)
{
    if(q->front!=NULL)
    {
        q->rear=q->front;
        free(q->front);
        q->front=q->rear;
    }
}

int main()
{
    Queue q;
    InitQueue(&q);
    PushQueue(&q,1);
    PushQueue(&q,2);
    PushQueue(&q,3);
    print(&q);
    popQueue(&q);
    print(&q);
    printf("队头元素为：%d\n",getfront(&q));
    printf("队尾元素为：%d\n",getrear(&q));
    printf("队列总元素个数为：%d\n",getsum(&q));
    destroy(&q);
    return 0;
}

