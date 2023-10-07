#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int t;
    cin>>t;
    while(t--){
        
            long long int n;
            cin>>n;
            long long int a[n];
            for(int i=0;i<n;i++){
                cin>>a[i];
            }
            long long int q;
            cin>>q;
            while(q--){
                long long int l,k;
                cin>>l>>k;
                long long int f=a[l-1];
                long long int i=l-1;
                long long int c=0;
                
                while(i<n and f>=k){
                    f=(f&a[i]);
                    i++;
                    c++;
                    
                    
                }
                if(c==1){
                    cout<<i<<endl;
                }
                else{
                    if(i-1>=l-1 and i-1<=n-1){
                    cout<<i-1<<" ";
                }
                    else{
                        cout<<-1<<" ";
                    }

                }
                
                
            }
            cout<<endl;
            }
            
        }

