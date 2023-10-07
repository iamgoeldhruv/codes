#include <bits/stdc++.h>
void insertcorrect(stack<int>&s,int x)
{
	if(s.empty()==true)
	{
		s.push(x);
		return;
	}
	if(s.top()<x)
	{
		s.push(x);
		return;
	}
	int z=s.top();
	s.pop();
	insertcorrect(s,x);
	s.push(z);
}
void sortStack(stack<int> &stack)
{
	if(stack.empty()==true)
	{
		return;
	}
	int x=stack.top();
	stack.pop();
	sortStack(stack);
	insertcorrect(stack,x);

}