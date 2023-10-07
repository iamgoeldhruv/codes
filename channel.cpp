#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    
    while(t--){
        int n,a,q;
        cin>>n>>a>>q;
        string s;
    cin>>s;
        if(a==n){
            cout<<"YES"<<endl;
            continue;
        }
        int plus=0;
        int minus=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='+'){
                plus++;
            }
            if(s[i]=='-'){
                minus++;
            }
        }
        if(a+plus<n){
            cout<<"NO"<<endl;
            continue;
        }
        int c=a;
        for(int i=0;i<s.size();i++){
            if(s[i]=='+'){
                c++;
                if(c==n){
                    cout<<"YES"<<endl;
                    break;
                }
            }
            else{
                c--;
            }

        }
        if(c==n){
            continue;

        }
        else{
            cout<<"MAYBE"<<endl;
        }

        

    }
}