#include<bits/stdc++.h>

using namespace std;
int main(){
    int x;
    cin>>x;
    int t=3;
    while(t--){
        int a,b;
        cin>>a>>b;
        if(a==x){
            x=b;
        }
        if(b==x){
            x=a;
        }
    }
    cout<<x;

}