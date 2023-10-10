#include<bits/stdc++.h>
using namespace std;

 
int main(){
    long long int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        char a=s[0];
        char b=s[1];
        int p=int(a)-int('0');
        if(p==1){
            cout<<13<<endl;
        }
        if(p==2){
            cout<<23<<endl;
        }
        if(p==3){
            cout<<37<<endl;
        }
        if(p==4){
            cout<<41<<endl;
        }
        if(p==5){
            cout<<59<<endl;
        }
        if(p==6){
            cout<<61<<endl;
        }
        if(p==7){
            cout<<71<<endl;
        }
        if(p==8){
            cout<<89<<endl;
        }
        if(p==9){
            cout<<97<<endl;
        }
       

       
    }
}