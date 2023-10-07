#include<iostream>
#include<stack>
using namespace std;
int main()
{
    int n;
    cin>>n;
    stack<char>st;
    for(int i=0;i<n;i++)
    {
        string s;
        cin>>s;
        for(int j=0;j<s.size();j++)
        {
            if(s[j]=='{' or s[j]=='[' or s[j]=='(')
            {
                st.push(s[j]);

            }
            if(s[j]=='}')
            {
                if(st.top()=='{')
                {
                    st.pop();
                }
            }
            if(s[j]==')')
            {
                if(st.top()=='(')
                {
                    st.pop();
                }
            }
            if(s[j]==']')
            {
                if(st.top()=='[')
                {
                    st.pop();
                }
            }
        }
        if(st.empty()==true)
        {
            cout<<"TRUE"<<endl;
        }
        else{
            cout<<"FALSE"<<endl;
        }

    }

}