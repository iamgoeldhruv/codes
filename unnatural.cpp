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
        // if(n%3==0){
        //     for(int i=0;i<n;i++){
        //         cout<<s[i];
        //         if(i%3==1){
        //             cout<<'.';
        //         }
        //     }
        //     cout<<endl;
        // }
        // else if(n%2==0){
        //     for(int i=0;i<n;i++){
        //         cout<<s[i];
        //         if(i%2==1){
        //             cout<<'.';
        //         }
        //     }
        //     cout<<endl;
        // }
        // else{
        //      for(int i=0;i<n-2;i++){
        //         cout<<s[i];
        //         if(i%3==1){
        //             cout<<'.';
        //         }
                
        //     }
        //     cout<<s[n-2]<<s[n-1];
        //     cout<<endl;

        // }
        map<char,char>m;
        m['a']='v';
        m['e']='v';
        m['b']='c';
        m['c']='c';
         m['d']='c';
         vector<long long int>v;
          map<long long int ,long long int>m1;
        
        for(int i=0;i<n-2;i++){
            if(m[s[i]]=='v'){
                if(m[s[i+1]]=='c' and m[s[i+2]]=='c'){
                    m1[i+1]++;
                }
                else{
                    m1[i]++;
                }
            }


        }
        for(int i=0;i<n;i++){
            cout<<s[i];
            if(m1[i]>0){
                cout<<'.';
            }
            
        }
        cout<<endl;

    }
}