#include<iostream>
#include<set>
using namespace std;
int main()
{
    set<int> s;
    s.insert(3);
    s.insert(12);
    s.insert(7);
    s.insert(89);
    for(int i:s)
    {
        cout<<i;
    }
    return 0;
    
    
}