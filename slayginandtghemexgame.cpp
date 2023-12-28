#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int t;
    cin>>t;
    while(t--){
            long long int n;
            cin>>n;
            map<long long int,long long int>m;
            for(int i=0;i<n;i++){
                long long int x;
                cin>>x;
             
                m[x]++;
            }
            long long int i=0;
            while(true){
                if(m[i]==0){
                    break;
                }
                else{
                    i++;
                }
            }
            cout<<i<<endl;
            cout.flush();
            long long int z=1;
            long long int y=0;
            cin>>y;
            while(z<2*n+1 and y!=-1){
                cout<<y<<endl;
                cout.flush();
                z++;
                cin>>y;
            }
        }
}