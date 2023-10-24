#include<bits/stdc++.h>
using namespace std;
int main(){
    
    long long int t;
    cin>>t;
    
    while(t--){
        long long int n,q;
        cin>>n>>q;
        long long int a[n];
        long long int even=0;
        long long int ceven=0;
        long long int odd=0;
        long long int codd=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]%2==0){
                even+=a[i];
                ceven++;
            }
            else{
                odd+=a[i];
                codd++;
            }
        }
            while(q--){
                long long int type,x;
                cin>>type>>x;
                if(type==0){
                    if(x%2==0){
                        even+=x*ceven;

                    }
                    else{
                        odd+=even+ceven*x;
                        even=0;
                        
                         codd+=ceven;
                        ceven=0;
                       
                    }

                }
                if(type!=0){
                    if(x%2==0){
                        odd+=x*codd;

                    }
                    else{
                         even+=odd+codd*x;
                        odd=0;
                       
                         ceven+=codd;
                        codd=0;
                       
                    }

                }
                cout<<even+odd<<endl;

            }
        

    }
}