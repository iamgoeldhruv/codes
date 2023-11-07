#include<bits/stdc++.h>
using namespace std;
int main(){
    
    long long int t;
    cin>>t;
    
    while(t--){
        int n;
        cin>>n;
        int l[n];
        map<int,int>m;
        for(int i=0;i<n;i++){
            cin>>l[i];
            m[l[i]]++;
        }
        sort(l,l+n);
        m[-1]=m[0]+1;
        int c=0;
        for(int i=0;i<=l[n-1];i++){
            if(m[i]==0 or m[i]>m[i-1]){
                c++;
                break;
            }

        }
        
        if(c==0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }



    }
}