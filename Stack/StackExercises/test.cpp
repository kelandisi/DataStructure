/*****************************************************
FileName:test.cpp
Author: MrAi
Mail:1191054822@qq.com
Created Time: 2020年04月03日 星期五 15时48分24秒
Notes:括号匹配问题:用栈的特性来实现

    **用队列来实现栈：
        思路：将队列中的元素向后依次插入 直到 i+1<que.size() 就把插入的元素顶到了队头的位置，也就营造出了先进后出的效果
    **用栈来实现队列
        思路：定义两个栈，用来到数据，将数据入a栈后，出栈，在依次入b栈，b栈里的数据就像是队列中的数据，实现了先进先出的效果
    **最小栈实现
        思路：定义两个栈，一个存放正常数据，另一个存放最小值的栈，如果x的值小于最小值的栈顶元素，就将x入栈，否则入自己的栈顶元素
***************************************************/
#include <iostream>
#include <stack>
#include <string>
using namespace std;
int fun(string str)
{
    stack <char> st;
    for(int i=0; i<str.size(); i++)
    {
        
        if(st.empty()&&(str[i]==')' || str[i]=='}' ||str[i]==']'))
            return 0;
        if(str[i]=='(' || str[i]=='{' || str[i]=='[')
        {
            st.push(str[i]);
        }
        else
        {
            if(st.empty())
                return 0;
            if(str[i]==')' && st.top()!='(' )
                return 0;
            if(str[i]=='}' && st.top()!='{' )
                return 0;
            if(str[i]==']' && st.top()!='[' )
                return 0;
            st.pop();
        }
    }
    if(!st.empty())
        return 0;
    else
        return 1;
    
}
int main()
{
    string str;
    getline(cin,str);
    if(fun(str)==1)
        cout<<"匹配\n";
    else
        cout<<"不匹配\n";
    return 0;
}

