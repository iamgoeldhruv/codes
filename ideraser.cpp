#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        int start=0;
        int c=0;
        for(int i=0;i<n;i++){
            if(s[i]=='B'){
                c++;
                i+=k-1;
            }
        }
        cout<<c<<endl;

    }
}