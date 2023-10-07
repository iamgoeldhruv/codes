#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
      
    int n;
    cin>>n;
    vector<pair<int,int>>v;
    for(int i=0;i<n;i++){
        pair<int,int>p;
        cin>>p.first>>p.second;
        v.push_back(p);
        sort(v.begin(),v.end());
        
        



    }
    int k=v[0].first;
    int p=v[0].first;
    if(v[0].second%2==0){
            p+=v[0].second/2-1;
    }
    else{
        p+=v[0].second/2;

    }
    
    for(int i=0;i<v.size()-1;i++){
        if(v[i].second%2==0){
            k+=v[i].second/2-1;
            p=min(p,k);
            if(k>v[i+1].first){
                k=v[i+1].first;
            }
        }
        else{
            k+=v[i].second/2;
            p=min(p,k);
            if(k>v[i+1].first){
                k=v[i+1].first;
            }
        }
        if(k<v[i+1].first){
            break;
        }
        

            
            

        
    }
    if(k==v[v.size()-1].first){
        if(v[v.size()-1].second%2==0){
            k+=v[v.size()-1].second/2-1;

        }
        else{
            k+=v[v.size()-1].second/2;

        }
    }
    cout<<min(p,k)<<endl;
    }
    
    

    
}