#include<bits/stdc++.h>
#include<map>
#include<vector>
using namespace std;
int main(){
    long long int t;
    cin>>t;
    while(t--){
       
        long long int n;
        cin>>n;
        long long int a[n+1];
        long long int b[n+1];
        for(int i=1;i<=n;i++){
            cin>>a[i];
        }
        for(int i=1;i<=n;i++){
            cin>>b[i];
        }
        long long int diff[n];
        for(int i=1;i<=n;i++){
            diff[i]=a[i]-b[i];
        }
        int max=INT_MIN;
        for(int i=1;i<=n;i++){
            if(diff[i]>max){
                max=diff[i];
            }
        }
        int c=0;
        vector<int>v;
        for(int i=1;i<=n;i++){
            if(diff[i]==max){
                v.push_back(i);
                c++;

            }
        }
        cout<<c<<endl;
         for(int i=0;i<v.size();i++){
            cout<<v[i]<<" ";
         }
         cout<<endl;

    }

}