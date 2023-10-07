#include<iostream>
using namespace std;
int main()
{

    int c;
    int arr1[5];
    for(int j=0;j<5;j++ )
        {

            cin>>arr1[j];
        }
    int arr2[5];
    for(int j=0;j<5;j++ )
        {
            cin>>arr2[j];
        }
    int arr3[5];
    for(int j=0;j<5;j++ )
        {
            cin>>arr3[j];
        }
    int arr4[5];
    for(int j=0;j<5;j++ )
        {
            
            cin>>arr4[j];
        }
    int arr5[5];
    for(int j=0;j<5;j++ )
        {
            cin>>arr5[j];
        }
    
    for(int j=0;j<5;j++)
        {
            if(arr1[j]==1)
            {
                c=2;
                break;
            }
            

        }
    for(int j=0;j<5;j++)
        {
            if(arr2[j]==1)
            {
                c=1;
                break;

            }
            
            

        }
    for(int j=0;j<5;j++)
        {
            if(arr3[j]==1)
            {
                c=0;
                break;
            }
            

        }
    for(int j=0;j<5;j++)
        {
            if(arr4[j]==1)
            {
                c=1;
                break;
            }
           

        }
    for(int j=0;j<5;j++)
        {
            if(arr5[j]==1)
            {
                c=2;
                break;
            }
            

        }
   
    int p;
    for(int i=1;i<=5;i++)
    {
        if(arr1[i-1]==1)
        {
            p=3-i;
            break;
        }
    }
    for(int i=1;i<=5;i++)
    {
        if(arr2[i-1]==1)
        {
            p=3-i;
            break;
        }
        
    }
    for(int i=1;i<=5;i++)
    {
        if(arr3[i-1]==1)
        {
            p=3-i;
            break;
        }
    }
    for(int i=1;i<=5;i++)
    {
        if(arr4[i-1]==1)
        {
            p=3-i;
            break;
        }
    }
    for(int i=1;i<=5;i++)
    {
        if(arr5[i-1]==1)
        {
            p=3-i;
            break;
        }
    }
    if(p<0)
    {
        p=(-1)*p;
    }
    
    c=c+p;
    cout<<c;
    return 0;
}

    





    
        
    
    
        
        
    
    

