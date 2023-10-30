#include<bits/stdc++.h>
using namespace std;
int main(){
    
    long long int t;
    cin>>t;
    
    while(t--){
        long long int n,m;
        cin>>n>>m;
        string s;
        cin>>s;
        string s1;
        cin>>s1;
        int c=0;
        int z=0;
        if(n==1){
            cout<<"YES"<<endl;
            continue;
        }

        for(int i=0;i<m-1;i++){
            if(s1[i]==s1[i+1] and m!=1 ){
                z++;
            }
        }
        for(int i=0;i<n-1;i++){
            if(s[i]==s[i+1]){
                if(z>0){
                    c++;
                    break;
                }
                else if(s[i]==s1[0] or s[i+1]==s1[m-1]){
                    c++;
                    break;

                }

            }
        }
        if(c>0){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }

    }
}