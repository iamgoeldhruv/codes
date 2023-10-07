#include<bits/stdc++.h>
using namespace std;
int main(){
    int p;
    cin>>p;
    while(p--){
        long long int n,k;
        cin>>n>>k;
        long long int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        vector<int>v;
        int =0;
        for(int i=1;i<n;i++){
            if((a[i]-a[i-1])<=k){
                t++;

                
                

            }
            
           
            

        }
        sort(v.begin(), v.end());
        int z=v.size();
        int q=v[z-1];
        cout<<q<<endl;
        if(n==1){
            cout<<0<<endl;
        }
        else if(n==2 && (a[1]-a[0])>k){
            cout<<2<<endl;

        }
        else if(n==2 && (a[1]-a[0])<=k){
            cout<<0<<endl;

        }
        else{
            cout<<n-(++q)<<endl;
            
        }

    }
}
