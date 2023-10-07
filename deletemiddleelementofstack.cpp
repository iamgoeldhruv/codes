#include <bits/stdc++.h> 
void solve(stack<int>&s, int N,int c)
{
  if (c == N / 2) {
    s.pop();
    return;
  }
  int x = s.top();
  s.pop();

   solve(s, N, c + 1);
  s.push(x);
}

void deleteMiddle(stack<int>&inputStack, int N){
	
   int c=0;
   solve(inputStack,N,c);
   
}