#include<bits/stdc++.h>
using namespace std;
int main(){
    
    long long int t;
    cin>>t;
    
    while(t--){
        long long int n,x;
        cin>>n>>x;
        long long int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        long long int z=a[0];
        long long int y=x-z;
        if(z>x){
            cout<<0<<endl;
            continue;
        }
        long long int sum[n];
        long long  c=0;
        long long  v=0;
        for(int i=0;i<n;i++){
            v+=a[i];
            sum[i]=v;
        }
        long long int count=0;
        long long int e=0;
        for(int i=n-1;i>=0;i--){
            long long int w=sum[i];
            if(e==1){
                 w+=(i+1)*(c-1);

            }
            else{
                 w+=(i+1)*c;
            }
           
            long long int diff=x-w;
            if(diff<0){
                continue;
            }
            long long int d=(diff/(i+1))+1;
            if(e==0){
                e++;
                c+=d;
                count+=d*(i+1);

            }
            else{
                c+=(d-1);
                count+=(d-1)*(i+1);


            }
           

            
        }

        
        cout<<count<<endl;
    }
}