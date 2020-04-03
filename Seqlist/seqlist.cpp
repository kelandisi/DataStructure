/*****************************************************
FileName:seqlist.cpp
Author: MrAi
Mail:1191054822@qq.com
Created Time: 2020年03月26日 星期四 22时03分52秒
Notes:
***************************************************/
#include <iostream>
#include <assert.h>
#include <stdlib.h>
using namespace std;
class seqlist
{
private:
    int *_array;
    int _capacity;
    int _size;
public:
    seqlist()
        :_array(NULL)
        ,_capacity(0)
        ,_size(0)
    {}
    ~seqlist()
    {
        if(_array==NULL)
            return;
        delete[] _array;
    }
    void popback()
    {
        if(_size==0)
            return;
        Erase(_size-1);
    }
    void popfront()
    {
        if(_size==0)
            return;
        Erase(0);
    }
    void Erase(int pos)
    {
        assert(pos<_size);
        for(int i=pos; i<_size; i++)
        {
            _array[i]=_array[i+1];
        }
        _size--;
    }
    void insert(int pos,int value)
    {
        assert(pos<=_size);
        for(int i=_size-1; i>=pos; i--)
        {
            _array[i+1]=_array[i];
        }
        _array[pos]=value;
        _size++;
    }
    void push_front(int value)
    {
        cheak_capaticy();
        insert(0,value);
    }
    void push_back(int value)
    {
        cheak_capaticy();
        insert(_size,value);
    }
    void cheak_capaticy()
    {
        if(_size==_capacity)
        {
            _capacity=_capacity*2+3;
            _array=(int*)realloc(_array,_capacity*sizeof(int));
        }
    }
    void print()
    {
        for(int i=0; i<_size; i++)
        {
            cout<<_array[i]<<" ";
        }
        cout<<endl;
    }
    int find(int value)
    {
        for(int i=0; i<_size; i++)
        {
            if(_array[i]==value)
                return i;
        }
        return -1;
    }
    void EraseRemove(int value)//删除顺序表中第一个val
    {
       int index = find(value);
       if(index!=-1)
       {
           Erase(index);
       }
    }
    void EraseAllRemove(int value)
    {
       /* int index=0;
        for(int i=0; i<_size; i++)
        {
            index=find(value);
            if(index!=-1)
                Erase(index);
        }时间复杂度为N2,太大了，不用*/
        int *extra=(int*)malloc(sizeof(int)*_size);
        int j=0;
        for(int i=0; i<_size; i++)
        {
            if(_array[i]!=value)
               extra[j++]= _array[i];
        }
        free(_array);
        _size=j;
        _array=extra;
    }
};

void test()
{
    seqlist s;
    s.push_front(3);
    s.push_front(3);
    s.push_front(1);
    s.print();
    s.push_back(3);
    s.push_back(5);
    s.push_back(7);
    s.push_back(6);
    s.print();
    s.popback();
    s.popfront();
    s.print();
    s.Erase(3);
    s.print();
    s.EraseRemove(3);
    s.print();
    s.EraseAllRemove(3);
    s.print();
}


int main()
{
    test();
    return 0;
}

