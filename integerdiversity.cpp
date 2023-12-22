#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        map<int,int>m;
        int c=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            m[fabs(a[i])]++;
        }
        for(auto it:m){
            if(it.second>1 and it.first!=0){
                c+=2;
            }
            else{
                c++;
            }
        }
        cout<<c<<endl;
        
         
    }
}