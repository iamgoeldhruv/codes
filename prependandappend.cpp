#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int i=0;
        int j=n-1;
        while(true){
            if(s[i]=='1' && s[j]=='0'){
            i++;j--;
            continue;
            
        }
        else if(s[i]=='0' && s[j]=='1'){
            i++,j--;
            continue;
        }
        else{
            break;

        }
        
        }
        if(j<i){
            cout<<0<<endl;
        }
        else{
            cout<<j-i+1<<endl;

        }
        
        
        
    }
}