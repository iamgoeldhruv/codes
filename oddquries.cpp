#include<iostream>
#include<vector>
using namespace std;
int main()
{
    long long int t;
    cin>>t;
    
    for(int i=0;i<t;i++)
    {
        long long int n,q;
        cin>>n>>q;
        int arr[n];
        int sum=0;
        int c;
            
        for(int j=0;j<n;j++)
        {
            cin>>arr[j];
            
            
        }
        for(int j=0;j<n;j++)
        {
            
            sum+=arr[j];
            c=sum;
            
        }
      
        for(int j=0;j<q;j++)
        {
            long long int l,r,k;
            cin>>l>>r>>k;
            for(int m=l-1;m<r;m++)
            {
                sum=c;
                sum=sum-arr[m];
            }
           
            

            
            sum+=k*(r-l+1);
            if(sum%2!=0)
            {
                cout<<"YES"<<endl;

            }
            else{
                cout<<"NO"<<endl;
            }



        }
       

    }
   
}