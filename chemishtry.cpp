#include<bits/stdc++.h>
using namespace std;
int main(){
    
    long long int t;
    cin>>t;
    
    while(t--){
        
        long long int n,k;
        cin>>n>>k;
        string s;
        cin>>s;

        map<char,long long int >m;
        for(int i=0;i<n;i++){
            m[s[i]]++;


        }
        int a=int('a');
        int b=int('z');
        long long int odd=0;
        for(int i=a;i<=b;i++ ){
            long long int c=m[char(i)];
            if(c%2!=0){
                odd++;
            }

        }
        if(k<odd-1){
            cout<<"NO"<<endl;
             continue;
        }
        else{
            cout<<"YES"<<endl;
        }
       


    }
}