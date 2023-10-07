#include<stack>
vector<int> nextSmallerElement(vector<int> &arr, int n)
{
    stack<int>s;
    s.push(-1);
    vector<int>v(n);
    for (int i = n - 1; i >= 0; i--) {
      while (s.top() >= arr[i])
      {
          s.pop();
      }
      v[i]=s.top();
      s.push(arr[i]);
    
    }
    return v;
}