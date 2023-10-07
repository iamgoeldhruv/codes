#include<iostream>
using namespace std;
int max(int a,int b)
{
    if(a>b)
    {
        return a;
    }
    else{
        return b;

    }
}
int min(int a,int b)
{
    if(a>b)
    {
        return b;
    }
    else{
        return a;

    }
}

int main()
{
    long long int t;
    cin>>t;
    int arr1[t];
    for(int i=0;i<t;i++)
    {
        int arr[4];
        for(int i=0;i<4;i++)
        {
            cin>>arr[i];
        }
        int a=max(arr[0],arr[1]);
        int b=max(arr[2],arr[3]);
        int c=max(a,b);
        int d=min(a,b);
        for(int j=3;j>=0;j--)
        {
            for(int i=0;i<j;i++)
            {
                if(arr[i]>arr[i+1])
                    {  
                     swap(arr[i],arr[i+1]);
            
                    }
            }
        }
  
        if(arr[2]==d and arr[3]==c)
        {
            arr1[i]=1;
        }
        else{
            arr1[i]=0;
        }
    }
    for(int i=0;i<t;i++)
    {
        if(arr1[i]==1)
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;;
        }

    }
}
    
    
    

