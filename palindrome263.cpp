#include<iostream>
#include<string>
#include<stack>
#include<algorithm>
using namespace std;
int main()
{
    string s;
    cin>>s;
    transform(s.begin(),s.end(),s.begin(),::toupper);
    stack<char>st;
    int n=s.size();
    if(s.size()%2==0)
    {
        for(int(i)=0;i<s.size()/2;i++)
        {
            st.push(s[i]);


        }
        for(int i=n/2;i<n;i++)
        {
            if(s[i]==st.top())
            {
                st.pop();
            }

        }
        if(st.empty()==true)
        {
            cout<<"TRUE";
        }
        else{
            cout<<"FALSE";
        }
    }
    if(n%2==1)
    {
        for(int(i)=0;i<s.size()/2;i++)
        {
            st.push(s[i]);


        }
        st.pop();
        for(int i=(n/2)+1;i<n;i++)
        {
            if(s[i]==st.top())
            {
                st.pop();
            }

        }
        if(st.empty()==true)
        {
            cout<<"TRUE";
        }
        else{
            cout<<"FALSE";
        }

    }
}