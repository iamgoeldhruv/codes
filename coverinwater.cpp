#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int c=0;
        int z=0;
        for(int i=0;i<n-2;i++){
            if(s[i]=='.' and s[i+1]=='.' and s[i+2]=='.'){
                c++ ;
                break;
                
            }
            else{
                    if(s[i]=='.'){
                    z++;}
                }
        }
        if(c==1){
            cout<<2<<endl;
        }
        else{
            if(s[n-2]=='.'){
                z++;
            }
            if(s[n-1]=='.'){
                z++;
            }
            cout<<z<<endl;
        }

    }
    
}