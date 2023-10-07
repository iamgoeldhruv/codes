#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int t;
    cin>>t;
    while(t--){
        long long int n,m;
        cin>>n>>m;
         
        long long int rem=n%m;
        // cout<<rem<<endl;
        if(rem!=0 and m%2==1){
            cout<<-1<<endl;
            continue;
        }
        
        long long int sum=0;
        // unordered_map<long long int,long long int>map;
        int c=0;
        long long int w=10E9;
        while(rem!=0){
            // map[rem]++;
            sum+=rem;
            long long int o=2*rem;
            long long int p=rem;
            w=min(rem,w);
            rem=(o)%m;
            // if(map[rem]>0){
            //     c++;
            //     cout<<rem<<endl;
            //     break;
            // }
            
            if(o>m and rem<=w){
                c++;
                break;
            }


        }
        if(c==1){
            cout<<-1<<endl;
            continue;
        }
        cout<<sum<<endl;
       


    }
}