#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int t;
   
        long long int n,x,y;
        cin>>n>>x>>y;
        string s;
        cin>>s;
        long long int z=n-1;
        long long int c=0;
        for(long long int i=1;i<=x;i++){
            if(i==y+1){
                if(s[z]=='0'){
                    c++;
                }
            }
            else{
                if(s[z]=='1'){
                    c++;
                }
            }
            z--;


        }
        cout<<c<<endl;

    }
