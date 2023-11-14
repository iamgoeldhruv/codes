#include<bits/stdc++.h>
using namespace std;
int main(){
    
    long long int t;
    cin>>t;
    
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        map<long long int,long long int>m;
        for(int i=0;i<n;i++){
            m[a[i]]++;
        }
        int c=0;
        vector<long long int>v;
        for(auto it:m){
            if(it.second>1){
                c++;
                v.push_back(it.first);
                if(c==2){
                    break;
                }



            }
        }
        if(c<2){
            cout<<-1<<endl;
            continue;
        }
        int v1[n];
        int l=0;
        int k=0;
        
        for(int i=0;i<n;i++){
            if(a[i]==v[0]){
                if(l==0){
                    v1[i]=1;
                    l++;
                }
                else{
                    v1[i]=2;
                    l--;
                }
                

            }
            else if(a[i]==v[1]){
                if(k==0){
                    v1[i]=2;
                    k++;
                }
                else{
                    v1[i]=3;
                    k--;
                }
                

            }
            else{
                v1[i]=1;
            }
            
           
            
        }
        for(int i=0;i<n;i++){
            cout<<v1[i]<<" ";
        }
        cout<<endl;
    }
}