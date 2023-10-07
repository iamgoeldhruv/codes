#include<iostream>
#include<vector>
using namespace std;
void printvec(vector<int> v)
{
    for(int j=0;j<v.size();j++)
    {
        cout<<v[j]<<" ";
    }
    cout<<endl;
}
int main()
{
    vector<vector<int>> v;
    int n;
    cout<<"entrr no.of rows you want"<<endl;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        v.push_back(vector<int> ());
        char ch='y';
        int a;
        while(ch=='y')
        {
            cout<<"enter the value to be entered"<<endl;
            cin>>a;
            v[i].push_back(a);
            cout<<"enter y for more char n for arrray to terminamte"<<endl;
            cin>>ch;
            
        }

    }
    for(int i=0;i<v.size();i++)
    {
        printvec(v[i]);
    }
    return 0;
}