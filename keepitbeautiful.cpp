#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int t;
    cin>>t;
    while(t--){
        long long int q;
        cin>>q;
        long long int a[q];
        for(int i=0;i<q;i++){
            cin>>a[i];
        }
        vector<long long int>v;
        v.push_back(a[0]);
        cout<<1;
        int c=0;
        long long int j=0;
        long long int z=q;
        for(int i=1;i<q;i++){
            if(a[i]>=v[j]){
                v.push_back(a[i]);
                j++;
                cout<<1;
            }
            else{
                if(a[i]<=v[0]){
                    v.push_back(a[i]);
                    j++;
                    
                    cout<<1;
                    z=i;
                    break;
                }
                else{
                    cout<<0;
                }
            }
        }
        for(int i=z+1;i<q;i++){
            if(a[i]>=v[j] and a[i]<=v[0]){
                cout<<1;
                v.push_back(a[i]);
                j++;
            }
            else{
                cout<<0;
            }
        }
        cout<<endl;
    }
}
