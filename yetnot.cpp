#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        string a="";
        int ac=0;
        int bc=0;
        int n=s.length();
        map<int,int>m;
        for(int i=s.length()-1;i>=0;i--){
            if(s[i]=='B'){
                bc++;
                m[i]++;
                continue;
            }
            if(s[i]=='b'){
                ac++;
                m[i]++;
                continue;
                
            }
            if(int(s[i])>=int('a') and int(s[i])<=int('z') and ac>0){
                m[i]++;
                ac--;


            }
            if(int(s[i])>=int('A') and int(s[i])<=int('Z') and bc>0){
                m[i]++;
                bc--;


            }

           
            
        }
        for(int i=0;i<n;i++){
            if(m[i]==0){
                a+=s[i];
            }
        }
        cout<<a<<endl;
    }
}