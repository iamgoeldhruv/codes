#include<iostream>
#include<vector>
using namespace std;
int main()
{
    long long int t;
    cin>>t;
    while(t--){
        long long int n,q;
        cin>>n>>q;
        long long int a[n+1];
            long long int s[n+1];
            long long int sum=0;
            s[0]=0;
            for(int i=1;i<n+1;i++){
                cin>>a[i];
                sum+=a[i];
                s[i]=sum;

            }
        while(q--){
            long long int l,r,k;
            cin>>l>>r>>k;
            long long int minussum=s[r]-s[l-1];
            long long int newsum=sum-minussum+(k*(l-r+1));
            if(newsum%2!=0){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }

        }
    }
    
    

    
   
}