#include<iostream>
using namespace std;
int number(int n)
{
    if(n==-1)
    {
        return 0;
    
    }
    cout<<n<<endl;
    
    number(n-1);
    
    
   


    
}
int main()
{
    int n;
    cin>>n;
    number(n);
    return 0;
    
}