#include<bits/stdc++.h>
using namespace std;
int main(){
   
    long long int t;
    cin>>t;
    
    while(t--){
        long long int n;
        cin>>n;
        vector<long long int>v;
        v.push_back(0);
       long long int p=2*n-2;
        long long int k;
       for(int i=1;i<=p;i++){
       k=sqrt(i);
       
        if(k*k==i){
            v.push_back(i);
        }
       }
       long long int j=n-1;
       map<long long int,long long int>m;
          map<long long int,long long int>m1;
          long long int c=0;
       for(int i=v.size()-1;i>0;i--){
        
        while(true){
            if((v[i]-j)>=0 and (v[i]-j)<=n-1){
                if(m[v[i]-j]!=1){
                    m[v[i]-j]=1;
                    j--;
                    m1[j]=v[i]-j;
                    c++;

                }
                

            }
            else{
                break;
            }
            
        }

    
       }
       if(c<n){
        cout<<-1<<endl;
        continue;
       }
       for(int i=0;i<n;i++){
        cout<<m1[i]<<" ";
        


       }
       cout<<endl;
    
       


    }
}
