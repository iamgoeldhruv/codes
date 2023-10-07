#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s="";

        int n,m;
        cin>>n>>m;
        for(int i=0;i<n;i++){
            string s1;
            cin>>s1;
            s+=s1;
        }
        int c=0;
        int z;
        for(int i=0;i<m;i++){
            for(int j=i;j<n*m;j+=m){
                if(s[j]=='v'){
                    c++;
                    z=i;
                    break;

                }
            }
            if(c==1){
                break;
            }

        }
        if(c==0){
            cout<<"NO"<<endl;
            continue;
        }
        else{
            for(int i=z+1;i<m;i++){
            for(int j=i;j<n*m;j+=m){
                if(s[j]=='i'){
                    c++;
                    z=i;
                    break;

                }
            }
            if(c==2){
                break;
            }

        }
        

        }
        if(c==1){
            cout<<"NO"<<endl;
            continue;
        }
        else{
            for(int i=z+1;i<m;i++){
            for(int j=i;j<n*m;j+=m){
                if(s[j]=='k'){
                    c++;
                    z=i;
                    break;

                }
            }
            if(c==3){
                break;
            }

        }

        }
        if(c==2){
            cout<<"NO"<<endl;
            continue;
        }
        else{
            for(int i=z+1;i<m;i++){
            for(int j=i;j<n*m;j+=m){
                if(s[j]=='a'){
                    c++;
                    z=i;
                    break;

                }
            }
            if(c==4){
                break;
            }

        }

        }
        if(c==3){
            cout<<"NO"<<endl;
            continue;
        }
        if(c==4){
            cout<<"YES"<<endl;
            continue;
        }


    }
}