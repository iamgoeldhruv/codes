#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the value of n"<<endl;
    float iden[n][n];
    float a[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j)
            {
                iden[i][j]=1;
            }
            else{
                iden[i][j]=0;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<"enter the value of element a["<<i+1<<"]["<<j+1<<"]"<<endl;
            cin>>a[i][j];
        }


    
    }
    

    
}