#include <bits/stdc++.h>
#include<stack> 
int findMinimumCost(string str) {
    if(str.length()%2!=0)
    {
        return -1;

    }
    stack<char>s;
    for(int i=0;i<str.length();i++)
    {
        if(str[i]=='{')
        {
            s.push(str[i]);
        } 
        else {
          if (s.top() == '}')
          {
              s.push(str[i]);

          }
          else{
              s.pop();
          }
        }
    }
    int a=0;
    int b=0;
    while(s.empty()!=true){
        if(s.top()=='{')
        {
            a++;
        }
        else{
            b++;
        }
        s.pop();
    }
    return (a+b+2)/2;
  
  









}