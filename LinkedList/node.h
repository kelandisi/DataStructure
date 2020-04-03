/*****************************************************
FileName:node.h
Author: MrAi
Mail:1191054822@qq.com
Created Time: 2020年03月27日 星期五 22时47分10秒
Notes:
***************************************************/
#pragma once

class Node
{
public:
    int val;
    Node* next;
    Node* radom;
public:
    Node()
        :val(-1)
        ,next(nullptr)
    {}
};

