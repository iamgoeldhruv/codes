#include<iostream>
#include<deque>
using namespace std;
int main()
{
    deque<int>d;
    d.push_back(4);
    d.push_back(6);
    d.push_back(7);
    d.push_back(11);
    d.push_front(8);
    d.erase(d.begin(),d.begin()+4);
    for(int i:d)
    {
        cout<<i<<" ";
    }
    return 0;
}
