#include<iostream>
#include<cmath>
using namespace std;
int main(){
    long long int n;
    cin>>n;
    while(n--){
        long long int  x;
        cin>>x;
        if(x==1){
            cout<<"NO"<<endl;
            continue;
        }
        int c=0;
        double d=sqrt(x);
        long long int p=d;

        if(x%p==0 and d==p){
            for(long long int j=2;j<=((sqrt(p)));j++){
                if(x%j==0){
                    c=1;
                    break;
                    
                }
            }
        if(c==1){
            cout<<"NO"<<endl;
            continue;

        }
        else{
            cout<<"YES"<<endl;
            continue;
        }


        }
        else{
            cout<<"NO"<<endl;
            continue;
        }

    }
   
}