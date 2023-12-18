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
        if(a.size()>b.size()){
             cout<<b<<" "<<a<<endl;
             continue;

        }
        int c=0;
        if(a.size()==b.size()){
            for(int i=0;i<a.size();i++){
                if(a[i]>b[i]){
                    c++;
                    break;
                }
                if(a[i]<b[i]){
                    break;
                }
            }
        }
        if(c>0){
             cout<<b<<" "<<a<<endl;
             continue;

        }
        cout<<-1<<endl;

       
    }
}