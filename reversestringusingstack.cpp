#include<iostream>
#include<string>
#include<stack>
using namespace std;
int main()
{
    stack<char>s;
    string str="dhruv";
    for(int i=0;i<str.length();i++)
    {
        s.push(str[i]);

    }
    while(!s.empty())
    {
        cout<<s.top();
        s.pop();
    }

}