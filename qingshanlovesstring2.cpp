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
        long long int l=0;
        long long int r=n-1;
        vector<long long int>v;
        while(l<r){
            if(s[l]!=s[r]){
                l++;
                r--;
            }
            else if(s[l]=='0' and s[r]=='0'){
                s.insert(r+1,"01");
                l++;
                r++;
                v.push_back(r);
            }
            else if(s[l]=='1' and s[r]=='1'){
                s.insert(l,"01");
                r++;
                l++;
                v.push_back(l-1);
            }
            if(v.size()>300){
                break;}

        }
        if(v.size()>300){
            cout<<-1<<endl;
        }
        else{
            cout<<v.size()<<endl;
            for(int i=0;i<v.size();i++){
                cout<<v[i]<<" ";
            }
            cout<<endl;
        }

        
      
      

    }
}