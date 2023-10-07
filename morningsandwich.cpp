#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int b,c,h;
        cin>>b>>c>>h;
        int s=c+h;
        if(b>=s+1){
            cout<<s+s+1<<endl;
        }
        else{
            cout<<b+b-1<<endl;

        }
    }
}