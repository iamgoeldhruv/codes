#include<iostream>
#include <unordered_map>
using namespace std;
int main()
{
    long long int t;
    cin>>t;
    while(t--){
        long long int t;
        cin>>t;
        long long int n;
        cin>>n;
        long long int a[n-1];
        for(int i=0;i<n-1;i++){
            cin>>a[i];
        }
        long long int b[n];
        if(n==2){
            if(a[0]==1 or a[0]==3){
                cout<<"YES"<<endl;

            }
            else{
                cout<<"NO"<<endl;
            }
        }
        else if(a[0]!=1){
            b[0]=1;
            for(int i=0;i<n-1;i++){
                b[i+1]=a[i]-b[i];
            }
            unordered_map<long long int,int>m;
            for(int i=0;i<n;i++){
                m[b[i]]++;
            }
            int c=0;
            for (auto i : m){
                if(i.second==1 and (i.first<=n and  i.first>=1)){
                    c++;
                }

                    

                
            }
            if(c==n){
                cout<<"YES"<<endl;
                continue;
            }
            else{
                cout<<"NO"<<endl;
                continue;
            }

            
            
        }
        if(a[0]==1){
            int c=0;
            for(int i=0;i<n-2;i++){
                if(((a[i+1]-a[i])<=n and (a[i+1]-a[i])>=1) or ((a[i+1]-a[i])>n and (a[i+1]-a[i])<=2*n)){
                    c++;

                }
            }
            if(c==n-1){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
        


    }
}