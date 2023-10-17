#include<bits/stdc++.h>
using namespace std;
int main(){
     ios_base::sync_with_stdio(0);
    long long int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        long long int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        long long int i=0;
        long long int p=0;
        while(i<n){
            if(a[i]==0){
                i++;
            }
            else{
                break;
            }
        }
        long long int c=0;
        long long int l=0;
        vector<long long int>v;
        
        for(int k=i;i<n;i++){
            if(a[i]!=0){
                v.push_back(a[i]);
                c=0;
                l++;
            }
            else{
                if(c==0){
                sort(v.begin(),v.end());c++;}
                if(l>0){
                    p+=v[l-1];
                    v.pop_back();
                    l--;
                }

            }

        }
        cout<<p<<endl;

    }
}

