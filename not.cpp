#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int t;
    cin>>t;
    while(t--){
        int k=3;
        map<char,int>m;
        while(k--){
            string s;
            cin>>s;
            for(int i=0;i<3;i++){
                m[s[i]]++;
            }
        }
        
        if(m['A']==2){
            cout<<'A'<<endl;
        }
        if(m['B']==2){
            cout<<'B'<<endl;
        }
         if(m['C']==2){
            cout<<'C'<<endl;
        }
        

        
       
    }
}