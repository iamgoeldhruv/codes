#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    long long int t;
    cin>>t;
    
    while(t--){
        long long int n;
        cin>>n;
        vector<int>v1;
        vector<int>v2;
        vector<int>v3;
        vector<int>v4;
        for(int i=0;i<n;i++){
            int x,y;
            cin>>x>>y;
            if(x>0){
                v1.push_back(x);
            }
            if(x<0){
                v2.push_back(x);
            }
            if(y>0){
                v3.push_back(y);
            }
            if(y<0){
                v4.push_back(y);
            }
        }
            int sum=0;
            sort(v1.begin(),v1.end());
            sort(v2.begin(),v2.end());
            sort(v3.begin(),v3.end());
            sort(v4.begin(),v4.end());
            if(v1.size()>0){
                sum+=v1[v1.size()-1];


            }
            if(v2.size()>0){
                sum+=-v2[0];
            }
            if(v3.size()>0){
                sum+=v3[v3.size()-1];
            }
            if(v4.size()>0){
                sum+=-v4[0];
            }
            cout<<2*sum<<endl;

        

        


        
        
    }
}