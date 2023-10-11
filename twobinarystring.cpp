#include<bits/stdc++.h>
using namespace std;

 
int main(){
    long long int t;
    cin>>t;
    while(t--){
        string a,b;
        cin>>a>>b;
        if(a.size()==2){
            cout<<"YES"<<endl;
          continue;

        }
        if(a==b){
            cout<<"YES"<<endl;
            continue;
        }
        long long int zcount=0;
        long long int ocount=0;
        
        int i=0;
         int z=0;
         int c=0;
        while(i<a.size()-1){
            if(a[i]==b[i] and a[i+1]==b[i+1]){
                if(a[i]=='0' and a[i+1]=='1'){
                    c++;
                    break;
                }
                
            }
            i++;
            
        }
        if(c==0){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }

    }
}