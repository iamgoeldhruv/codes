#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        vector<long long int>a;
        long long int  x;
        long long int p;
       
        for(int i=0;i<n;i++){
            cin>>p;
            a.push_back(p);

            

            
          

        }
        sort(a.begin(),a.end());
        
        if(n==1){
            x=a[0];
            int c=0;
            for(int i=1;i<=x;i++){
                if(int(x)%i==0){
                    c++;
                    if(c>2){
                        break;
                    }
                }
            }
            if(c==2){
                cout<<x*x<<endl;
                continue;
            }
            else{
                cout<<-1<<endl;
                continue;
            }
        }
        else{
            x=a[0]*a[n-1];
            vector<long long int>v;
            for(int i=2;i*i<=x;i++){
                if(x%i==0){
                    v.push_back(i);
                    if(i!=x/i){
                        v.push_back(x/i);

                    }

                }
            }
             sort(v.begin(),v.end());
            //  for(int i=0;i<v.size();i++){
            //     cout<<v[i]<<endl;
            //  }

            if(v==a){
                cout<<x<<endl;

            }
            else{
                cout<<-1<<endl;
            }
        }
    }
    
}