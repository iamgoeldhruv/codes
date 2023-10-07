#include <bits/stdc++.h>
void pushh(stack<int>&s,int x)
{
    if(s.empty()==true)
    {
        s.push(x);
        return;
    }
    int z=s.top();
    s.pop();
    pushh(s,x);
    s.push(z);
}

stack<int> pushAtBottom(stack<int> &mystack, int x) 
{
   pushh(mystack,x);
   return mystack;
}
