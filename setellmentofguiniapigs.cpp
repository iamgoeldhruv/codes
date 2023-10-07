#include<iostream>
using namespace std;
int main()
{
    long long int t;
    while(t--)
    {
        long long int n;
        cin>>n;
        long long int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int c1=0;
        int c2=0;
        int ans;
        for(int i=0;i<n;i++)
        {
            if(arr[i]==2)
            {
                c1=0;
                c2+=c1;
                ans=max(ans,(c2+2)/2);
                if(c2==0)
                {
                    ans=ans;
                }
            }
            else{
                c1++;
                ans=max(ans,(c2+2)/2+c1);
                if(c2==0)
                {
                    ans=max(ans,c1);
                }
            }

        }
        cout<<ans<<endl;
    }
}