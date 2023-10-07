#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    long long int t;
    cin>>t;
    while(t--){
        int c=0;
        int n,m;
        cin>>n>>m;
        long long int k,h;
        cin>>k>>h;
        long long int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
            if((h-a[i])%k==0 && fabs(h-a[i])<=(k*(m-1)) && fabs(h-a[i])>=k){
                c++;

            }
            
        }
        cout<<c<<endl;



    }
}