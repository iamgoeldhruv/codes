//we can reverse queue using stack;
//code
queue<int> rev(queue<int> q)
{
    stack<int> st;
    while(q.empty()==false)
    {
        int e=q.front();
        q.pop();
        st.push(e);
        
    }
    while(st.empty()==false)
    {
        int e=st.top();
        st.pop();
        q.push(e);
    }
    return q;
    
}
//reverse 1st k elements of queue
queue<int> modifyQueue(queue<int> q, int k) {
    stack<int>st;
    int n=q.size();
  
    for(int i=0;i<k;i++)
    {
        int e=q.front();
        st.push(e);
        q.pop();
        
    }
    
    while(!st.empty())
    {
        int ee=st.top();
        q.push(ee);
        st.pop();
        
    }
    for(int j=0;j<(n-k);j++)
    {
        int ee=q.front();
        q.push(ee);
        q.pop();
    }
    return q;
    
}
//dinding duplicate elements in a string


