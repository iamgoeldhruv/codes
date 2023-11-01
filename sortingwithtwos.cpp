#include<bits/stdc++.h>
using namespace std;
int main(){
    
    long long int t;
    cin>>t;
    
    while(t--){
        int n;
        cin>>n;
        int a[n+1];
        for(int i=1;i<=n;i++){
            cin>>a[i];
        }
        int c=0;
        unordered_map<int,int>m;
        m[0]++;
        m[2]++;
        m[4]++;
        m[8]++;
        m[16]++;

        for(int i=1;i<n;i++){
            if(a[i]>a[i+1]){
                if(m[i]>0){
                    a[i]=a[i+1];
                }
                else{
                    c++;
                    break;
                }

            }
            
        }
         if(c>0){
                cout<<"NO"<<endl;
            }
            else{
                cout<<"YES"<<endl;
            }


    }
}