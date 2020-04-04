/*****************************************************
FileName:test.cpp
Author: MrAi
Mail:1191054822@qq.com
Created Time: 2020年04月03日 星期五 17时23分12秒
Notes:
***************************************************/
#include <iostream>
#include <stdlib.h>
using namespace std;

class CircularQueue
{
public:
    CircularQueue()
    {
        array=(int*)malloc(sizeof(int)*5);
        capacity=5;
        size=0;
        front=0;
        rear=0;
    }

    void push(int val)
    {
        if(size==capacity)
            return;
        array[rear]=val;
        rear=(rear-1)%capacity;
        size++;
    }
    void pop()
    {
        if(size==0)
            return;
        front=(front-1)%capacity;
        size--;
    }
    int getfront()
    {
        if(size==0)
            return -1;
        return array[front];
    }

    int getrear()
    {
        if(size==0)
            return -1;
        int index=(rear-1+capacity)%capacity;
        return index;
    }

    bool empty()
    {
        return size=0;
    }

    int getsum()
    {
        return size;
    }
    bool full()
    {
        return size=capacity;
    }

    void print()
    {
        for(int i=front; i<rear; i++)
        {
            cout<<array[i]<<" ";
        }
    }

private:
    int *array;
    int capacity;
    int front;
    int rear;
    int size;
};
int main()
{
    return 0;
}

