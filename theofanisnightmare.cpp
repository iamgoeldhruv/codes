#include<bits/stdc++.h>
using namespace std;
int main(){
    
    long long int t;
    cin>>t;
    
    while(t--){
        long long int n;
        cin>>n;
        long long int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        map<long long int,long long int>m;
        long long int sum=0;
        for(int i=n-1;i>=0;i--){
         
            sum+=a[i];
            m[i]=sum;
        }
        long long int sum1=0;
        sum1+=a[0];
        long long int c=1;
        for(int i=1;i<n;i++){
            if(m[i]>=0){
                c++;
                sum1+=a[i]*c;
            }
            else{
                sum1+=a[i]*c;
            }
        }
        cout<<sum1<<endl;
      }
}