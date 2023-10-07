#include<iostream>
#include<vector>
using namespace std;
int main(){
    long long int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        long long int b[n];
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        vector<int>v;
         v.push_back(b[0]);
       
        for(int i=1;i<n;i++){
            if(b[i]>=b[i-1]){
                v.push_back(b[i]);
                
            }
            else{
                v.push_back(b[i]);
                v.push_back(b[i]);
            }
            
        }
        cout<<v.size()<<endl;
        for(int i=0;i<v.size();i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;

    }
}