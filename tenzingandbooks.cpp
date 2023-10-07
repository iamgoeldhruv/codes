#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long int n,x;
        cin>>n>>x;
        long long int a[n];
        long long int b[n];
        long long int c[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        for(int i=0;i<n;i++){
            cin>>c[i];
        }
        if(x==0){
            cout<<"YES"<<endl;
            continue;
        }
        else if((x<a[0]) && (x<b[0]) && (x<c[0])){
            cout<<"NO"<<endl;
            continue;
        }
        int k=0;
        for(int i=0;i<n;i++){
            if((x|a[i])==x){
                k|=a[i];
            }
            else{
                break;
            }
        }
         cout<<k<<endl;
        if(k==x){
            cout<<"YES"<<endl;
            continue;
        }
         cout<<k<<endl;
        for(int i=0;i<n;i++){
            if((x|b[i])==x){
                k|=b[i];
            }
            else{
                break;
            }
        }
        
        if(k==x){
            cout<<"YES"<<endl;
            continue;
        }
        cout<<k<<endl;
        for(int i=0;i<n;i++){
            if((x|c[i])==x){
                k|=c[i];
            }
            else{
                break;
            }
        }
        if(k==x){
            cout<<"YES"<<endl;
            continue;
        }
        cout<<"NO"<<endl;
        


    }
}