#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int e=0;
        int o=0;
        for(int i=0;i<n;i++){
            if(a[i]%2==0){
                e++;
            }
            else{
                o++;
            }
        }
        if(e>0 and o>0){
            cout<<2<<endl;
            continue;
        }
        sort(a,a+n);
        long long int z=2;
        int c=0;
        while(true){
               map<long long int,long long int>m;
            for(int i=0;i<n;i++){
                if(m[a[i]%z]==0){
                    m[a[i]%z]++;
                    c++;
                }
                if(c>2){
                    break;
                }
            }
            if(c==2){
                break;
            }
            else{
                z*=2;
                c=0;
                
            }
        }
        cout<<z<<endl;

       


    
    
    }
}