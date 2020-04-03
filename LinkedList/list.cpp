/*****************************************************
FileName:/home/aiqichao/C-CPP1/LinkedList/list.cpp
Author: MrAi
Mail:1191054822@qq.com
Created Time: 2020年03月27日 星期五 22时52分28秒
Notes:
实现链表的基本操作：
 **头插头删，尾插尾删（分情况讨论）
 **反转链表reverse（）：（给一个空链表，将原链表的结点头插进去）
 **删除链表中给定的val值的结点 removeElements（int val）：
 思路：1、准备一个空链表，原链表中的val不等于，给定的val，就将这个结点尾插到空链表
 2、双指针（删除一个结点，需要知道这个节点的前驱节点和后继结点）

 **合并两个有序链表mergeOrderList()：
 思路：准备一个空链表的头和尾--->遍历两个链表---->比较谁小将谁尾插到空链表中---->最后把剩余部分直接放在新链表后

 **分割链表partition()：
 思路：遍历链表，将＜val的值尾插到小链表中，>val的值尾插到大链表中，最后一步判断小链表是否为空
 如果为空，则直接返回大链表，不为空的话，将小链表合并到大链表上

 **找到链表倒数K个结点findkthTail()
 思路：先统计链表中有几个节点，然后遍历count-K次得到倒数K个结点

 **删除排序链表中重复元素
 思路：用快慢指针的方式来确定删除区间，用prev来记录前驱结点

 **判断链表的回文结构chkPalindrome()
 思路：1、用栈来进行判断：将链表中前一半元素入栈，然后出栈，一次和后一半元素比较（暂时不写代码）
 2、找到链表中间位置，然后逆置，与前一半元素进行比较  

 **找到两个链表公共的结点getIntersectionNode()
 思路：1、先获取两个链表的长度，让长的链表先走长度差的距离，然后两个链表同时走，直到相等为止
 2、让A链表走，走到NULL，然后去走B链表；让B链表走，走到NULL，去走A链表，最后相遇（两个链表同时走）

 **判断链表中是否有环
 思路：快慢指针，快指针走2下，慢指针走1下，如果有环，就会相遇，就说明有环。

 **深拷贝链表
 思路：分三步：一、将老链表复制一份，插在每一个结点后边
 二、将random复制到新链表上
 三、将新链表和老链表分开
 ***************************************************/
#include <iostream>
#include <assert.h>
#include "list.h"
using namespace std;

list::list()
    :head(NULL)
{}

list::~list()
{
    Node* cur=head;
    while(head)
    {
        cur=head;
        head=head->next;
        delete cur;
    }
}
void list::push_front(int val)
{
    Node* node = new Node();
    node->val=val;
    node->next=head;
    head=node;

}

void list::push_back(int val)
{
    Node* node =new Node();
    node->val=val;
    node->next=NULL;
    if(head!=NULL)
    {
        Node* last=head;
        while(last->next!=NULL)
        {
            last=last->next;
        }
        last->next=node;
    }
    else
        head=node;
}

void list::pop_front()
{
    assert(head!=NULL);
    Node* next=head->next;
    free(head);
    head=next;
}

void list::pop_back()
{
    assert(head!=NULL);
    if(head->next==NULL)
    {
        free(head);
        head==NULL;
    }
    else
    {
        Node* last=head;
        while(last->next->next!=NULL)
        {
            last=last->next;
        }
        free(last->next);
        last->next=NULL;
    }
}

Node* list::reverse(Node* head)
{
    Node* resulthead=NULL;
    Node* cur=head;
    while(cur!=NULL)
    {
        Node* next=cur->next;
        cur->next=resulthead;
        resulthead = cur;
        cur=next;
    }
    return resulthead;
}

void list::removeElements(int val)
{
    /*双指针法
      Node* prev=head;
      assert(head!=NULL);

      Node* cur=head->next;
      while(cur!=NULL)
      {
      if(cur->val==val)
      {
      prev->next=cur->next;
      }
      else
      prev=cur;
      cur=cur->next;
      }
      if(head->val==val)
      head=head->next;
      }*/

//准备空链表法
Node* resulthead=NULL;
Node* cur=head;
while(cur!=NULL)
{
    Node* next=cur->next;
    if(cur->val!=val)
    {
        //尾插
        if(resulthead==NULL)
        {
            cur->next=NULL;
            resulthead=cur;
        }
        else
        {
            Node* last=getlast(resulthead);
            cur->next=NULL;
            last->next=cur;
        }
    }
    cur=next;
}
if(head->val==val)
    head=head->next;
    }

Node*list:: getlast(Node* head)
{
    Node* cur=head;
    while(cur->next!=NULL)
    {
        cur=cur->next;
    }
    return cur;
}

Node* list::creat(Node*head)
{
    Node* p1=NULL;
    Node* p2;
    int val=0;
    while(cin>>val)
    {
        p2= new (Node);
        p2->val=val;
        if(head==NULL)
            head=p2;
        else
            p1->next=p2;
        p1=p2;
        if(cin.get()=='\n')
            break;
    }
    if(p1!=NULL)
        p1->next=NULL;
    return head;
}

Node*list::mergeOrderList(Node* h1, Node* h2)
{
    if(h1==NULL)
        return h2;
    if(h2==NULL)
        return h1;
    Node* cur1=h1;
    Node* cur2= h2;
    Node* rHead=NULL;
    Node* last=NULL;
    while(cur1!=NULL && cur2!=NULL)
    {
        if(cur1->val > cur2->val)
        {
            Node* next=cur2->next;
            if(rHead==NULL)
                rHead=cur2;
            else
            {
                last->next=cur2;
            }
            last=cur2;
            cur2=next;
        }
        else
        {
            Node* next=cur1->next;
            if(rHead==NULL)
                rHead=cur1;
            else
            {
                last->next=cur1;
            }
            last=cur1;
            cur1=next;
        }
    }
    if(cur1!=NULL)
        last->next=cur1;
    else
        last->next=cur2;
    return rHead;
}

Node*list:: partition(Node* head,int val)
{
    Node* small=NULL;
    Node* smallast=NULL;
    Node* big=NULL;
    Node* biglast=NULL;
    Node* cur=head;
    while(cur!=NULL)
    {
        if(cur->val < val)
        {
            Node* next=cur->next;
            cur->next=NULL;
            if(small==NULL)
                small=cur;
            else
                smallast->next=cur;
            smallast=cur;
            cur=next;
        }
        else
        {
            Node* next=cur->next;
            cur->next=NULL;
            if(big==NULL)
                big=cur;
            else
                biglast->next=cur;
            biglast=cur;
            cur=next;
        }
    }
    if(small==NULL)
        return big;
    else
    {
        smallast->next=big;
        return small;
    }
}

void list::print(Node* head)
{
    Node* cur=head;
    Node* temp;
    while(cur!=NULL)
    {
        cout<<cur->val<<"--->";
        temp=cur;
        cur=cur->next;
        free(temp);

    }
    cout<<"NULL"<<endl;
}

int list:: findkthTail(Node* head,int val)
{
    Node* cur=head;
    int count=0;
    while(cur!=NULL)
    {
        count++;
        cur=cur->next;
    }
    if(count<val)
        return NULL;
    Node* p=head;
    for(int i=0; i<count-val; i++)
    {
        p=p->next;
    }
    return p->val;
}

Node* list::deleteDuplication(Node* head)
{
    if(head==NULL)
        return NULL;
    Node* prev=NULL;
    Node* p1=head;
    Node* p2=head->next;
    while(p2!=NULL)
    {
        if(p1->val!=p2->val)
        {
            prev=p1;
            p1=p1->next;
            p2=p2->next;
        }
        else
        {
            while(p2!=NULL && p1->val==p2->val)
            {
                p2=p2->next;
            }
            if(prev==NULL)
            {
                head=p2;
            }
            else
            {
                prev->next=p2;
            }
            p1=p2;
            if(p2!=NULL)
                p2=p2->next;
        }
    }
    return head;
}

Node* middle(Node* head)
{
    Node* cur=head;
    int count=0;
    while(cur!=NULL)
    {
        count++;
        cur=cur->next;
    }
    Node* p1=head;
    for(int i=0; i<count/2; i++)
    {
        p1=p1->next;
    }
    return p1;
}

bool list::chkPalindrome(Node* head)
{
    Node* p=middle(head);
    Node* p1=list::reverse(p);
    Node* cur1=head;
    Node* cur2=p1;
    while(cur1!=NULL && cur2!=NULL)
    {
        if(cur1->val!=cur2->val)
            return false;
        cur1=cur1->next;
        cur2=cur2->next;
    }
    return true;
}

int getlenth(Node* head)
{
    Node* cur=head;
    int count =0;
    while(cur!=NULL)
    {
        count++;
        cur=cur->next;
    }
    return count;
}

Node*list:: getIntersectionNode(Node* head1,Node* head2)
{
    if(head1==NULL || head2==NULL)
        return NULL;
    Node* longer=head1;
    Node* shorter=head2;
    while(longer!=shorter)
    {
        if(longer!=NULL)
            longer=longer->next;
        else
            longer=head2;
        if(shorter!=NULL)
            shorter=shorter->next;
        else
            shorter=head1;
    }
    return longer;
}

Node* list::hasloop(Node* head)
{
    Node* fast=head;
    Node* slow=head;
    do
    {
        fast=fast->next;
        if(fast==NULL)
            return NULL;
        fast=fast->next;
        if(fast==NULL)
            return NULL;
        slow=slow->next;
    }while(fast!=slow);
    Node* p1=slow;
    Node* p2=head;
    while(p1!=p2)
    {
        p1=p1->next;
        p2=p2->next;
    }
    return p1;
}

Node* copyLink(Node* head)
{
    Node* cur=head;
    while(cur!=NULL)
    {
        Node* node = new Node();
        node->val=cur->val;
        node->next=cur->next;
        cur->next=node;
        cur=node->next;
    }

    cur=head;
    while(cur!=NULL)
    {
        if(cur->radom!=NULL)
        {
            cur->next->radom=cur->radom->next;
        }
        else
            cur->next->radom=NULL;
        cur=cur->next->next;
    }

    cur=head;
    Node* rHead=head->next;
    while(cur!=NULL)
    {
        Node* node=cur->next;
        cur->next=node->next;
        if(node->next!=NULL)
        {
            node->next=node->next->next;
        }
        cur=cur->next;
    }

    return rHead;
}

int main()
{
    list l;
    Node* head=NULL;
    Node* h1=NULL;
    //int val=0;
    Node* h2=NULL;
    //Node* ret =NULL;
    h1 =  l.creat(h1);
    //cin>>val;
    h2 =  l.creat(h2);
    //ret =    l.mergeOrderList(h1,h2);
    //head=l.partition(h1,val);
    //int ret = l.findkthTail(h1,val);
    //cout<<ret;
    //head = l.deleteDuplication(h1);
    //l.print(head);
    //if(l.chkPalindrome(h1))
    //  cout<<"是回文结构";
    //else
    //   cout<<"不是回文结构";
    //return 0;


}

