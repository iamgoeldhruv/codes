#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    long long int t;
    cin>>t;
    
    while(t--){
        long long int n;
        cin>>n;
        string s;
        cin>>s;
        long long int z=n-1;
        long long int c=0;
        long long int sum=0;
        long long int x=0;
        for(int i=z;i>=0;i--){
            if(s[i]=='1'){
                c++;
            }
            if(s[i]=='0'){
                sum+=c;
                cout<<sum<<" ";
                x++;
            }


        }
        long long int w=n-x;
        for(int i=0;i<w;i++){
            cout<<-1<<" ";
        }
        cout<<endl;
    }
}