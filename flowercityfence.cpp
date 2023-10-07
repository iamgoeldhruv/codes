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
        sort(a,a+n);
        if(a[n-1]!=n){
            cout<<"NO"<<endl;
            continue;
        }
        long long int a1[n];
        int c=0;
        for(int i=0;i<a[0];i++){
                a1[i]==n;
                c++;
            }
        int i=1;
       
        while(true){
           
            int diff=a[i]-a[i-1];
            int j=0;
            while(c<n && j<diff){
                a1[c]==n-i;
                c++;
                j++;
                continue;

            }
            i++;
            if(c<n-1){
                continue;
            
                
            }
            else{
                break;
            }
            


            
            
            
           
        }
        int k=0;
        for(int i=0;i<n;i++){
            if(a[i]==a1[n-1-i]){
                k++;
                
            }
            cout<<a1[n-1-i]<<" ";

        }
        if(k==n){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

        
        }
}