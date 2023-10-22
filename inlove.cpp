#include<bits/stdc++.h>
using namespace std;
int main(){
    
    long long int q;
    cin>>q;
    
    for(int i=1;i<=q;i++){
        char a;
        cin>>a;
        long long int l,r;
        cin>>l>>r;
        int c=0;
        vector<pair<long long int,long long int>>v;
        vector<pair<long long int,long long int>>flag;
        if(a=='+'){
            pair<long long int,long long int>p;

            p.first=l;
            p.second=r;
            if(c==0){
                v.push_back(p);
                cout<<"NO"<<endl;
                continue;
                c++;

                
            }
            else{
                for(int j=0;j<v.size();j++){
                    
                }


            }





        }

    }
}