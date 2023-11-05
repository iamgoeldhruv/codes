#include<bits/stdc++.h>
using namespace std;
int main(){
    
    long long int t;
    cin>>t;
    
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        if(n%2!=0){
            cout<<-1<<endl;
            continue;
        }
       long long int a=1;
        long long int a=1;
       long long int b=n;
       vector<long long int>v;
       while(a<=n){
        if(b>n){
            if(s[a-1]=='1'){
                a++;
                b--;
            }
            else{
                v.push_back(b);
                b++;
                a++;
            }

        }
        if(b<=n){
            if(s[a-1]=='1' and s[b-1]=='0'){
                a++;
                b--;
            }
            else if(s[a-1]=='0' and s[b-1]=='1'){
                a++;
                b--;
            }
            else if(s[a-1]=='1'){
                c++;
                break;
            }
            else if(s[a-1]=='0'){
                v.push_back(b);
                b++;
            }
        }
       

       }
      

    }
}