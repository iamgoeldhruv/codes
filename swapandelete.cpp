#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
    long long int o=0;
    long long int z=0;
    long long int c=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='0'){
            z++;
        }
        else{
            o++;
        }
    }
    long long int p=min(o,z);
    c+=fabs(o-z);
     z=0;
     o=0;
     for(int i=0;i<2*p;i++){
         if(s[i]=='0'){
            z++;
            if(z>p){
                z--;
                break;
            }
        }
        else{
            o++;
            if(o>p){
                o--;
                break;
            }
        }
    }
    c+=2*p-(o+z);
    cout<<c<<endl;
    }
}