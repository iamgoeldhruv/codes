#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    long long int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        long long int n;
        cin>>n;
        long long int arr[n];
        for(int j=0;j<n;j++)
        {
            cin>>arr[j];
        }
         int max=0;
         for(int j=0;j<n;j++)
         {
            int z=fabs(arr[j]-j);
            if(z>max)
            {
                max=z;
            }
         }
         cout<<max<<endl;

    }
}
