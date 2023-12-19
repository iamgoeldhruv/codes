#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        string a="";
        string b="";
        b+=s[0];
        int z=s.length();
        for(int i=1;i<s.length();i++){
            if(s[i]=='0'){
                b+=s[i];
                continue;
            }
            else{
                z=i;
                break;

            }


        }
        for(int i=z;i<s.length();i++){
            a+=s[i];
        }
        
        if(a==""){
            cout<<-1<<endl;
            continue;
        }
        long long int aa=stoi(a);
        long long int bb=stoi(b);
        if(aa>bb){
            cout<<bb<<" "<<aa<<endl;
        }
        else{
            cout<<-1<<endl;
        }

       
    }
}