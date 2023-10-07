#include<iostream>
#include<stack>
using namespace std;
int main()
{
    long long int q;
    cin>>q;
    stack<long long int>st1;
    stack<long long int>st2;
    for(int i=0;i<q;i++)
    {
        int a=0;
        int b=0;
        cin>>a;
        if(a==1)
        {
            cin>>b;
        }
        if(a==1)
        {
            if(st1.empty()==true)
            {
                st1.push(a);
            }
            else{
                st2.push(b);
            }
        }
        
        if(a==2)
        {
            if(st1.empty()==true)
            {
                st2.pop();
            }
            else{
                st1.pop();
            }
        }
        if(a==3)
        {
            if(st1.empty()==false)
            {
                while(st1.empty()!=true)
                {
                    st2.push(st1.top());
                    st1.pop();
                }
                cout<<st2.top()<<endl;
                
            }
            else{
                while(st2.empty()!=true)
                {
                    st1.push(st2.top());
                    st2.pop();
                }
                cout<<st1.top()<<endl;
                
            }

        }
    }

}