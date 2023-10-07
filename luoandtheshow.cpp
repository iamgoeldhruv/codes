#include<iostream>
using namespace std;
int main()
{
    long long int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        long long int n;
        long long int m;
        cin>>n>>m;
        long long int arr[n];
        int arr1[m];
        for(int j=0;j<m;j++)
        {
            arr1[j]=0;
        }
        
        
        for(int j=0;j<n;j++)
        {
            cin>>arr[j];
        }
        int c=0;
        for(int j=0;j<n;j++)
        {
            if(arr[j]==-1)
            {
                if(arr1[0]==1)
                {
                    continue;
                }
                
                else{
                    int z=0;
                    for(int k=0;k<m;k++)
                    {
                        if(arr1[k]==1)
                        {
                            c++;
                            arr1[k-1]=1;
                            break;
                        }
                        z++;

                    }
                    if(z==m)
                    {
                        arr1[m-1]==1;
                    }
                    
                }
                



            }
            if(arr[j]==-2)
            {
                if(arr1[m-1]==1)
                {
                    continue;

                }
                else{
                    int p=0;
                    for(int k=m-1;k>=0;k--)
                    {
                        if(arr1[k]==1)
                        {
                            c++;
                            arr1[k+1]=1;
                            break;
                        }
                        p++;
                    }
                    if(p==m)
                    {
                        arr1[0]==1;
                    }
                   
                }
                

            }
            if(arr[j]>0)
            {
                int f=arr[j];
                if(arr1[f-1]==1)
                {
                    continue;
                }
                else{
                    c++;
                    arr1[f-1]=1;
                }
            }
        }
        cout<<c<<endl;
        

    }
}