#include <bits/stdc++.h>
using namespace std;
int main(){
    long long int t;
    cin>>t;
    while(t--){
        long long int n,k;
        cin>>n>>k;
        long long int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        long long int s=a[0];
        long long int e=a[n-1];
       if(s==e){
            long long int c=0;
            for(int i=0;i<n;i++){
                if(a[i]==s){
                    c++;
                }
            }
            if(c>=k){
                cout<<"YES"<<endl;

            }
            else{
                cout<<"NO"<<endl;
            }
            continue;
        }
        long long int c1=0;
        long long int c2=0;
        long long int z=0;
        for(int i=0;i<n;i++){
            if(a[i]==s){
                c1++;
            }
            if(c1==k){
                z=i;
                break;
            }
        }
        if(c1<k){
            cout<<"NO"<<endl;
            continue;
        }
        for(int i=z+1;i<n;i++){
            if(c2==k){
                break;
            }
            if(a[i]==e){
                c2++;
            }
        }
        if(c2<k){
            cout<<"NO"<<endl;
            continue;
        }
        cout<<"YES"<<endl;
        
    }
}