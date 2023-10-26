#include<bits/stdc++.h>
using namespace std;
int main(){
    
    long long int t;
    cin>>t;
    
    while(t--){
        long long int n;
        cin>>n;
        char c;
        cin>>c;
        string s;
        cin>>s;
        if(c=='g'){
            cout<<0<<endl;
            continue;
        }
        long long int maxx=0;
        int flag=0;
        long long int z=-1;
        int g=0;
        long long int ww;
        for(int i=0;i<n;i++){
            if(s[i]=='g' and g==0){
                g++;
                ww=i;
            }
            if(s[i]==c){
                flag++;
                if(z==-1){
                    z=i;

                }
                

            }
            if(s[i]=='g' and flag>0){
                maxx=max((i-z),maxx);
                flag=0;
                z=-1;

            }


        }
        
        if(flag!=0){
            maxx=max(n-1-z+ww+1,maxx);
        }
        cout<<maxx<<endl;
        
    }

}