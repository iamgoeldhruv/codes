#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int x=0;
    vector<int>v;
    long long int a;
    cin>>a;
    int c=a;
    if(a>10)
    {
        while(c>0)
        {
            int b=c%10;
            c=c/10;
            v.push_back(b);
        } 
        for(int i=0;i<v.size();i++)
        {

            if(v[i]==4 or v[i]==7)
            {
                continue;
            }
            else{
                x++;
                break;
            }

        }
        if(x==0)
        {
            cout<<"YES";
        }
        else{
            cout<<"NO";
        }
    }
    if(a<10)
    {
        if(a==7 or a==10)
        {
            cout<<"YES";
        }
        else
        {
            cout<<"NO";
        }
    }
    return 0;
}
