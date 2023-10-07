#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int t;
    cin>>t;
    while(t--){
        long long int n,m,k;
        cin>>n>>m>>k;
        long long int a[n];
        long long int b[m];
        long long int sum=0;

        for(int i=0;i<n;i++){
            cin>>a[i];
            sum+=a[i];
        }
        for(int i=0;i<m;i++){
            cin>>b[i];
        }
        if(k%2==0){
            long long int p=10;
            k=min(k,p);
        }
        if(k%2==1){
            long long int q=9;
            k=min(k,q);
        }
        for(int i=1;i<=k;i++){
            if(i%2==1){
                sort(a,a+n);
                    sort(b,b+m);
                if(a[0]<b[m-1]){
                    
                    sum=sum-a[0]+b[m-1];
                    long long int x=a[0];
                    long long int y=b[m-1];
                    a[0]=y;
                    b[m-1]=x;
                }
            }
            if(i%2==0){
                sort(a,a+n);
                    sort(b,b+m);
                if(a[n-1]>b[0]){
                     
                    sum=sum-a[n-1]+b[0];
                    long long int p=a[n-1];
                    long long int q=b[0];
                    a[n-1]=q;
                    b[0]=p;
                }
            }
        }
        cout<<sum<<endl;

    }
}