#include<iostream>
using namespace std;
 
int main(){
    long long int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        for(int i=1;i<=n;i+=2){
            for(int j=i;j<=n;j+=j){
                cout<<j<<" ";
            }
        }
        cout<<endl;
    }
}