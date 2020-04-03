/*****************************************************
FileName:list.h
Author: MrAi
Mail:1191054822@qq.com
Created Time: 2020年03月27日 星期五 22时49分46秒
Notes:list头文件
 ***************************************************/
#pragma once
#include "node.h"
class list
{
public:
    list();
    void push_front(int val);
    void push_back(int val);
    void pop_front();
    void pop_back();
    Node* reverse(Node* head);
    void removeElements(int val);
    Node* getlast(Node* resulthead);
    Node* creat(Node* head);
    void print(Node* head);
    Node* partition(Node* head,int val);
    Node* mergeOrderList(Node* h1, Node* h2);
    int findkthTail(Node* h1,int val);
    Node* deleteDuplication(Node* head);
    bool chkPalindrome(Node* head);
    Node*getIntersectionNode(Node* head1,Node* head2);
    Node*hasloop(Node* head);

    ~list();

private:
    Node* head;
};

