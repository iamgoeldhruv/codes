#include<bits/stdc++.h>
using namespace std;
int main(){
    
    long long int t;
    cin>>t;
    
    while(t--){
        long long int n,k;
        cin>>n>>k;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        
        long long int minn=10;
       
        for(int i=0;i<n;i++){
            long long int p=a[i]%k;
            if(p==0){
                minn=0;
                break;
            }

            else{
                minn=min(minn,k-p);
            }
        }
        long long int c=0;
        long long int d=0;
        if(k==4){
            for(int i=0;i<n;i++){
                if(a[i]%2==0){
                    c++;
                }
                if(a[i]%2!=0){
                    d++;


                }
            }
            if(c>=2){
                minn=0;
               
            }
         if(d>=2){
                long long int aa=2;
                minn=min(minn,aa);
              
            }
           if(c>=1 and d>=1){
                long long int bb=1;
                minn=min(minn,bb);

            }


           
            

        }
        cout<<minn<<endl;
    }
}