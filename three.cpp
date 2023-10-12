#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int t;
    cin>>t;

    while(t--){
        long long int a,b,c;
        cin>>a>>b>>c;
        if((a==b and b==c) and c==a){
            cout<<"YES"<<endl;
            continue;
        }
        long long int sum=a+b+c;
        long long int w;

        if(sum%4==0){
            w=sum/4;
            if(a%w==0 && b%w==0 && c%w==0){
                cout<<"YES"<<endl;
                continue;
                

            }

        }
        if(sum%5==0){
            w=sum/5;
            if(a%w==0 && b%w==0 && c%w==0){
                cout<<"YES"<<endl;
                continue;

            }

        }
        if(sum%6==0){
            w=sum/6;
            if(a%w==0 && b%w==0 && c%w==0){
                cout<<"YES"<<endl;
                continue;

            }

        }
        cout<<"NO"<<endl;

        }





        
        
    }
