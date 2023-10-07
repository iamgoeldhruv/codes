#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        string q;
        int l=s.size();
        if(s=="()"){
            cout<<"NO"<<endl;
            continue;
        }
        if(s[0]==')'){
            cout<<"YES"<<endl;
            int c=0;
            for(int i=0;i<l;i++){
                if(s[i]==')'){
                    c++;
                }
            }
            if(c==l){
                for(int i=0;i<l;i++){
                cout<<"()";
            }
            cout<<endl;
            continue;

            }
            if(c!=l){
                for(int i=0;i<l;i++){
                cout<<'(';
                }
                for(int i=0;i<l;i++){
                cout<<')';
                }
                cout<<endl;
                continue;
            }
                
            
            
            
        }
        else if(s[0]=='(' && s[l-1]=='('){
            cout<<"YES"<<endl;
            for(int i=0;i<l-1;i++){
                cout<<'(';

            }
            for(int i=0;i<l-1;i++){
                cout<<')';

            }
            cout<<"()";
            cout<<endl;
            continue;

        }
        else if(s[0]=='(' && s[l-1]==')'){
            cout<<"YES"<<endl;
            string p;
            for(int i=0;i<l/2;i++){
                p+="()";
            }
            if(p==s){
                for(int i=0;i<l;i++){
                cout<<'(';
            }
            for(int i=0;i<l;i++){
                cout<<')';
            }
            cout<<endl;
            continue;

            }
            else{
                for(int i=0;i<l;i++){
                    cout<<"()";
                }
                cout<<endl;
                continue;

            }
        }

    }
}