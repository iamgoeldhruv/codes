#include<iostream>
#include<stack>
#include<cmath>
#include<string>
using namespace std;

int main()
{
    stack<int>st;
    string s1;
    getline(cin,s1);
    string s;
    for(int i=0;i<s1.size();i++)
    {
        if(int(s1[i])!=32)
        {
            s+=s1[i];
        }
    }


    

    
    for(int i=0;i<s.size();i++)
    {
        int a=(s[i]-'0')*(pow(10,0));
        if(a>=0 and a<=9)
        {
            st.push(a);
        }
        else{
            if(s[i]=='+')
            {
                int b=st.top();
                st.pop();
                int c=st.top();
                st.pop();
                st.push(b+c);
                
            }
            if(s[i]=='-')
            {
                int b=st.top();
                st.pop();
                int c=st.top();
                st.pop();
                st.push(c-b);
                
            }
            if(s[i]=='*')
            {
                int b=st.top();
                st.pop();
                int c=st.top();
                st.pop();
                st.push(b*c);
                
            }
            if(s[i]=='/')
            {
                int b=st.top();
                st.pop();
                int c=st.top();
                st.pop();
                st.push(c/b);
               
            }
            if(s[i]=='^')
            {
                int b=st.top();
                st.pop();
                int c=st.top();
                st.pop();
                st.push(pow(c,b));
            }

        }
    }
    cout<<st.top();
   





}