#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n;
    cout<<"ENTER THE SIZE OF MATRIX"<<endl;
    cin>>n;
    float a[n][n];
    float l[n][n];
    int p[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<"ENTER THE ELEMENT A["<<i+1<<"]["<<j+1<<"]"<<endl;
            cin>>a[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j)
            {
                p[i][j]=1;
            }
            else{
                p[i][j]=0;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j)
            {
                l[i][j]=1;
            }
            else{
                l[i][j]=0;
            }
        }
    }
    for(int i=0;i<n-1;i++)
    {
        int x;
        float f;
        float m=fabs(a[i][i]);
        for(int j=i+1;j<n;j++)
        {
            if(fabs(a[j][i])>=m)
            {
                m=fabs(a[j][i]);
                x=j;

            }
        }
        for(int k=i;k<n;k++)
        {
            swap(a[i][k],a[x][k]);
            swap(p[i][k],p[x][k]);




            
        }
        for(int w=0;w<i;w++)
        {
            swap(l[i][w],l[x][w]);
            
        }
        
        
    
    
       
        for(int q=i+1;q<n;q++)
        {
            f=a[q][i]/a[i][i];
            l[q][i]=f;
            for(int k=i;k<n;k++)
            {
                a[q][k]=a[q][k]-f*a[i][k];
            }
        }


           
    
    



    }
    cout<<"upper triamgular matrix is"<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<l[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}