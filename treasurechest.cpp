#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int t;
    cin>>t;
    while(t--){
        int x,y,k;
        cin>>x>>y>>k;
        int c=x+k;
        if(y<=x){
            cout<<x<<endl;
            continue;
        }
        cout<<x+min(y-x,k)+2*(y-(x+min(y-x,k)))<<endl;
    }
}