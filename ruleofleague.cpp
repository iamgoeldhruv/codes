#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int t;
    cin>>t;
    while(t--){
        long long int n,x,y;
        cin>>n>>x>>y;
        if(x!=0 and y!=0){
            cout<<-1<<endl;
            continue;
        }
         if(x==0 and y==0){
            cout<<-1<<endl;
            continue;
        }
        if(x>n-1 or y>n-1){
            cout<<-1<<endl;
            continue;

        }
        long long int p=max(x,y);
        int i=1;
         int c=0;
         int k=1;
         if((n-1)%p!=0){
            cout<<-1<<endl;
            continue;
         }
        while(i<=n-1){
           
            
            if(c<p){
                cout<<k<<" ";
              
            }
              c++;
            if(c==p){
                c=0;
                k=i+2;

            }
            i++;

        }


    }
}