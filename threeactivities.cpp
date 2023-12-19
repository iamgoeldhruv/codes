#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        vector<<pair<long long int,long long int>>a;
        vector<<pair<long long int,long long int>>b;
        vector<<pair<long long int,long long int>>c;

        for(int i=0;i<n;i++){
            long long int x;
            cin>>x;
            a.push_back({x,i})
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
         for(int i=0;i<n;i++){
            cin>>c[i];
        }
        long long int sum1=0;
        long long int sum3=0;
        long long int sum=0;
        long long int maxx=0;
        for(int i=0;i<n;i++){
           for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                
            }
           }
           
        }
        cout<<maxx<<endl;
      



        

    }
}