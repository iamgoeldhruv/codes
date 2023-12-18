#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        string s;
        cin>>s;
        string a=s;
        long long int c=0;
        int d=0;
        sort(a.begin(),a.end());
        // for(int i=0;i<n-1;i++){
        //     if(s[i]>s[i+1]){
        //         c++;
        //     }
        // }
        for(int i=0;i<n-1;i++){
            if(s[i]!=a[i]){
                if(s[i]>s[i+1]){
                    c++;
                    continue;
                }
                else{
                    d++;
                    break;
                }
            }

        }
        if(d==0){
            cout<<c<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }
}