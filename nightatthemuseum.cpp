#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int c=0;
    int a=int('a');
    int b;
    for(int i=0;i<s.size();i++)
    {
        b=int(s[i]);
        if(fabs(b-a)<26-fabs(b-a))
        {
            c+=fabs(b-a);
        }
        else{
            c+=26-fabs(b-a);
        }
        a=int(s[i]);


    }
    cout<<c;
}