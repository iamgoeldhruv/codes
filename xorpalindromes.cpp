#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        string s;
        cin>>s;
        string p=s;
        reverse(p.begin(),p.end());
        long long int c=0;
        for(int i=0;i<n;i++){
            if(s[i]!=p[i]){
                c++;
            }

        }
       
        
        string t="";
        for(int i=0;i<=n;i++){
            if(i==c/2){
                t+='1';
            }
            if(i<c/2){
                t+='0';

            }
            if(i>c/2){
                 long long int same=n-c;
                 long long int onesleft=i-c/2;
                 if((onesleft%2==0 and onesleft<=same) or onesleft==same or(same%2!=0 and onesleft<=same)){
                    t+='1';
                 }
                 else{
                    t+='0';
                 }

            }
            

        }
        cout<<t<<endl;

        
    }
}