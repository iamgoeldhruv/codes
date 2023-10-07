#include<iostream>
using namespace std;
int main()
{
    int a[3][3];
   
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<"enter the value of a["<<i<<"]"<<"["<<j<<"]"<<endl;
            cin>>a[i][j];



            
        }
    }
    int b[3][3];
   
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<"enter the value of b["<<i<<"]"<<"["<<j<<"]"<<endl;
            cin>>b[i][j];



            
        }
    }
    int ab[3][3];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            int k=0;
            int f=j;
            

            
            
            while(k<3)
            {
                ab[i][j]=0;
                ab[i][j]+=a[i][f]*b[f][i];
                k++;
                f++;

            }
            
            
        }
    
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            
            cout<<b[i][j]<<" ";
        }
        cout<<endl;
    }
     for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            
            cout<<ab[i][j]<<" ";
        }
        cout<<endl;
    }
    
    return 0;





}