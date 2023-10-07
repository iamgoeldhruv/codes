#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        long long int s,e;
        long long int w;
        long long int c=0;
        for(int i=0;i<n;i++){
            if(i==0){
                cin>>s>>e;
                w=s;
            }
            if(i>=1){
                long long int a,b;
                cin>>a>>b;
                if(a>=w){
                    if(b>=e){
                        c++;
                    }
                }

            }
        }
        if(c>=1){
            cout<<-1<<endl;
        }
        else{
            cout<<w<<endl;
        }

    }
}