#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a=0,b=0,c=0;
   
    for(int i=1;i<=n;i++)
    {
        int arr[3];
        cin>>arr[0]>>arr[1]>>arr[2];
        a+=arr[1];
        b+=arr[1];
        c+=arr[2];
    }
    if(a==0 and b==0 and c==0)
    {
        cout<<"YES";

    }
    else{
        cout<<"NO";
    }
    return 0;
        
}
       

    