//LIFO
//PUSH TO INSERT
//POP TO REMOVE
//TOP
//IS EMPTY
//STACK USING STL
 

/*
int main()
{
    //creation of stack;
    stack<int> s;
    s.push(2);
    s.push(3);
    s.pop();
    cout<<"printing top elememt"<<s.top()<<endl; 
    cout<<"size is"<<s.size()<<endl;
}*/
//implementation of stack
//using array
/*
class stack{
    public:
    int *arr;
    int top;
    int size;
    stack(int a)
    {
        size=a;
        arr=new int[size];
        top=-1;
    } 
    void  push(int element)
    {
        if(size-top>1)
        {
            top++;
            arr[top]=element;

        }
        else{
            cout<<"stack overflow"<<endl;

        }
    }
    void pop()
    {
        if(top>=0)
        {
            top--;
        }
        else{
            cout<<"STACK UNDERFLOW"<<endl;
        }
    }
    int peek()
    {
        if(top>=0 and top<size)
        {
            return arr[top];
        }
        else{
            cout<<"stack is empty"<<endl;
            return -1;
        }

    }
    bool isempty()
    {
        if(top==-1)
        {
            return true;
        }
        else{
            return false;
        }
    }




     
};
int main()
{
    stack st(5);
    st.push(56);
    st.push(76);
    st.push(96);
    cout<<st.peek()<<endl;
    st.pop();
    cout<<st.peek()<<endl;
    //now you can call all functions this way
    //T.C OF EACH STACK FUNCTION O(1)


}*/
 //design two stack usinh 1 array common for both stack
 /*class stack{
    public:
    int *arr;
    int top1;
    int top2;
    int size;
    stack(int s)
    {
        size=s;


        arr=new int(size);
        top1=-1;
        top2=size;
    }
    void push1(int e)
    {
        if(top2-top1>1)
        {
            top1++;
            arr[top1]=e;

        }
        else{
            cout<<"stack overflow"<<endl;
        }
        
    }
    void push2(int e)
    {
        if(top2-top1>1)
        {
            top2--;
            arr[top2]=e;

        }
        else{
            cout<<"stack overflow"<<endl;
        }
        
    }
    void pop1()
    {
        if(top1==-1)
        {
            cout<<"underflow"<<endl;
        }
        else{
            top1--;
        }
    
    }
    void pop2()
    {
        if(top2==size)
        {
            cout<<"underflow"<<endl;
        }
        else{
            top2++;
        }
    }
 };*/
 //reverse string using stack
//#include<iostream>
////#include<stack>

//using namespace std;
/*

 int main()
 {
    string s="dhruv";
    
    stack<char> st;
    for(int i=0;i<s.length();i++)
    {
        char c=s[i];
        st.push(c);


    }
    while(st.top()>-1)
    {
        cout<<st.top();
        st.pop();
    }

 }
*/
//delete middle element from stack
/*
void solve(stack<int>s,int count,int size)
{
   if(count==size/2)
   {
        s.pop();
        return;
   } 
   int num=s.pop();
   solve(s,count+1,size);
   s.push(num);
}
 void deleete(stack<int>&s,int n)
 {
    int count=0;
    solve(s,count,n);
 }*/
 //valid paraentheses
 /*
 bool isvalid(string s)
 {
    stack<char>st;
    for(int i=0;i<s.size();i++)
    {
        char c=s[i];
        if(c=='{' ||c=='[' || c=='(')
        {
            st.push(c);

        }
        else{
            if(!st.empty())
            {
                char top=st.top();
                if(you know what to write)
                {
                    s.pop();
                }
                else{
                    return false;
                }


            }
            else{
                return false;
            }

        }

    }
    if(st.empty()){
        return true;
    }
    else{
        return false;
    }
*/
/*
#include<iostream>
using namespace std;
struct stack{
    
    int *arr;
    int top;
    int size;

};

void createstack(stack &s,int n)
{
    s.size=n;
    s.arr=new int[n];
    s.top=-1;

}
void push(stack &s,int e,int n)
{
    if(n-s.top>1)
    {
        s.top++;
        s.arr[s.top]=e;

    }
    else{
        cout<<"STACK OVERFLOW"<<endl;
    }

}
void peek(stack &s)
{
    cout<<s.arr[s.top];
}






int main()
{
    struct stack s;
    createstack(s,5);
    push(s,10,5);
    push(s,20,5);
    peek(s);

}
*/
//to add element at bottom of stack
/*
#include <bits/stdc++.h>
void solve(stack<int> &s, int x)
{
    if(s.empty())
    {
        s.push(x);
        return;
    }
    int n=s.top();
    s.pop();
    solve(s,x);
    s.push(n);
}
stack<int> pushAtBottom(stack<int> &mystack, int x) 
{
    solve(mystack,x);
    return mystack;


}
*/
/*

        

    
//to reverse stack using recursion;
void insertatbottom(stack<int> &s,int x)
{
    if(s.empty())
    {
        s.push(x);
        return;
    }
    int n=s.top();
    insertatbottom(s,n);
    {
        s.push(n);
    }
}
void reverseStack(stack<int> &stack) {
    if(stack.empty())
    {
        return;
    }
    int x=stack.top();
    stack.pop();
    reverseStack(stack);
    insertatbottom(stack,x);

    

}*/










    

 
      




 



 
  


